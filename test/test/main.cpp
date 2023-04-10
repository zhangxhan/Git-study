#include <ctime>

#include "reverse.h"
#include "compress.h"
#include "days_between_dates.h"
#include "count_digit_one.h"
#include "lexical_order.h"
#include "top_kfrequent.h"
#include "multiply.h"
#include "consecutive_numbers_sum.h"
#include "min_sub_array_len.h"


int main()
{
	//��ת����
	//cout << reverse(259)<<endl;

	//ѹ������
	//vector<char> chars = { 'a','a','b','b','c','c','c'};
	//cout << compress(chars)<<endl;

	//���ڲ�
	//cout << daysBetweenDates("2019-06-29", "2019-06-30")<< endl;

	//���� 1 �ĸ���
	//cout << countDigitOne3(3184191) << endl;

	//�ֵ�������
	//lexicalOrder(132);

	//ǰ K ����ƵԪ��
	//vector<int> res = { 1, 1, 1, 2, 2, 3 };
	//topKFrequent(res, 2);
	//topKFrequent2(res, 2);

	//�ַ������
	//cout << multiply("123", "456") << endl;


	//vector<int> res = { 5,2,6,1 };
	//countSmaller(res);

	//vector<int> res = { 2, 3, 1, 2, 4, 3 };
	//cout << minSubArrayLen(7, res);

	//�����������


	start = clock();
	consecutiveNumbersSum2(151);
	end = clock();
	cout << static_cast<double>(end - start) << "ms" << endl;

	start = clock();
	consecutiveNumbersSum3(151);
	end = clock();
	cout << static_cast<double>(end - start) << "ms" << endl;

	return 0;
}