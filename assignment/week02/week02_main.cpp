#include "week02.hpp"

void week02::drawStar( )
{
	// ����ڷκ��� �ݺ� Ƚ���� �Է¹޾Ƽ� �ش� Ƚ����ŭ ���� ���� ������ ����մϴ�.
	// �� �ٸ��� ���� ������ 1���� �þ�ϴ�.
	// �ۼ��� �Ʒ� �ڵ� ������ �ۼ��� �ּ���
	// !! �Լ��� ȣ�� �Ǿ�����, __func__�� �̿��� "drawStar�Լ� ȣ��!" �̶�� ������ ��µǰ� ���ּ��� !!
	
	std::cout << __func__ << "�Լ� ����!" << std::endl;
	std::cout << "�ݺ� Ƚ���� �Է��ϼ��� : ";

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


// ���ڷ� ���޵� 2���� int ������ ���� ���� ���� ��ȯ�ϴ� �Լ� add�� �ۼ��� �ּ���.
// add �Լ��� week02 ���ӽ����̽��� ���ǵǾ� �ֽ��ϴ�.

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
		std::cout << "1. �� ���" 
					<< " 2. ���ϱ�" 
						<< " 3. ����" << std::endl;

		// switch ���� ����ؼ� choice ������ ���� ���� ���ϴ� ����� �����ϵ��� �������ּ���
		// 1, 2, 3�� �ƴ� �ٸ� �Է��� ������, �߸��� �Է��̶� ������ ����ϰ� �ٽ� �Է��ϵ��� ������ �ּ���.
		// 1�� : �� ���, 2�� : ���ϱ�, 3�� : ���α׷� ����
		// !! ���ڰ� �ԷµǾ �ٽ� �Է��ϵ��� ������ �ּ��� !!
		
		
		std::cin >> choice;


		
		

		switch(choice){
			case 1: 
				week02::drawStar();
				break;
			case 2:
				std::cout << "���� 2���� �Է��ϼ��� !" << std::endl;
				std::cin >> num1 >> num2;
				sum = week02::add(num1, num2);
				std::cout << sum << std::endl;
				break;

			case 3: 
				std::cout << "����!";
				return 0;

			default:
				//���ڰ� �ԷµǾ��� �� cin �Է� ���� �� ���� ó��
				if (std::cin.fail())
				{
					std::cin.clear(); //�߸��� �Է����� ���� �����÷��� �����
					while(std::cin.get() != '\n') {}; //���ۿ� �����ִ� �Է±��� ���� -���1
					// ���2 - cin.ignore(������ ���� ����, ���� ������) *�� ���ڴ� or����*
				}
				std::cout << "�߸��� �Է��Դϴ�." << std::endl;
		} 	

	}

	return 0;
}