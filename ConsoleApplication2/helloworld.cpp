#include <iostream>
class LetDebug
{
public:
	void printNum()
	{
		short s1 = 32767; //short�� 2����Ʈ, �� 16��, 32767���� ǥ�� ����
		short s2 = 1;
		//short s3 = (short)s1 + s2; //32767�� 1�� ���ϸ� 32768�� �ǹǷ� �̸� ǥ���ϱ� ���ؼ� �� ū �ڷ����� �ʿ�
		int s3 = (short)s1 + s2;
		std::cout << s3 << std::endl;
	}
};
int main()
{
	LetDebug *ld = new LetDebug;
	ld->printNum();
	return 0;
}
//�������������׽�Ʈ22