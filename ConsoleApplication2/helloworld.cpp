#include <iostream>
class LetDebug
{
public:
	void printNum()
	{
		short s1 = 32767; //short는 2바이트, 즉 16비, 32767까지 표현 가능
		short s2 = 1;
		//short s3 = (short)s1 + s2; //32767에 1을 더하면 32768이 되므로 이를 표현하기 위해선 더 큰 자료형이 필요
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
//수정내용저장테스트22