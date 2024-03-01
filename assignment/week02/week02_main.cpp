#include "week02.hpp"

void week02::drawStar( )
{
	// 사용자로부터 반복 횟수를 입력받아서 해당 횟수만큼 별이 찍힌 라인을 출력합니다.
	// 각 줄마다 별의 개수는 1개씩 늘어납니다.
	// 작성은 아래 코드 영역에 작성해 주세요
	// !! 함수가 호출 되었을때, __func__를 이용해 "drawStar함수 호출!" 이라는 문장이 출력되게 해주세요 !!
	
	std::cout << __func__ << "함수 실행!" << std::endl;
	std::cout << "반복 횟수를 입력하세요 : ";

	int rnum;
	std::cin >> rnum;  

	for(int i=0; i < rnum; i++)
	{
		for(int j=0; j< i+1; j++){
			std::cout << "*"; 
		}

		std::cout << std::endl;
	}
	
}


// 인자로 전달된 2개의 int 형태의 값을 더한 값을 반환하는 함수 add를 작성해 주세요.
// add 함수는 week02 네임스페이스에 정의되어 있습니다.

int week02::add(int a, int b)
{
	return a+b;
}


int main()
{
	int choice = 0 ;
	int num1, num2, sum;

	while ( true )
	{
		std::cout << "====================================" << std::endl;	
		std::cout << "1. 별 찍기" 
					<< " 2. 더하기" 
						<< " 3. 종료" << std::endl;

		// switch 문을 사용해서 choice 변수의 값에 따라 원하는 기능이 동작하도록 구현해주세요
		// 1, 2, 3이 아닌 다른 입력이 들어오면, 잘못된 입력이란 문장을 출력하고 다시 입력하도록 구현해 주세요.
		// 1번 : 별 찍기, 2번 : 더하기, 3번 : 프로그램 종료
		// !! 문자가 입력되어도 다시 입력하도록 구현해 주세요 !!
		
		
		std::cin >> choice;


		
		

		switch(choice){
			case 1: 
				week02::drawStar();
				break;
			case 2:
				std::cout << "숫자 2개를 입력하세요 !" << std::endl;
				std::cin >> num1 >> num2;
				sum = week02::add(num1, num2);
				std::cout << sum << std::endl;
				break;

			case 3: 
				std::cout << "종료!";
				return 0;

			default:
				//문자가 입력되었을 떄 cin 입력 실패 및 무시 처리
				if (std::cin.fail())
				{
					std::cin.clear(); //잘못된 입력으로 인한 에러플래그 지우기
					while(std::cin.get() != '\n') {}; //버퍼에 남아있는 입력까지 비우기 -방법1
					// 방법2 - cin.ignore(무시할 문자 길이, 종료 구분자) *두 인자는 or개념*
				}
				std::cout << "잘못된 입력입니다." << std::endl;
		} 	

	}

	return 0;
}