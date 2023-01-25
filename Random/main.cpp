#include<iostream>
using namespace std;

//#define MIN_MAX_RAND_SORT
#define RAND_DUPLICATE


#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");

#ifdef MIN_MAX_RAND_SORT
	const int n = 5;
	int arr[n];

	int minRand, maxRand;
	do
	{
		cout << "������� ����������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� �����: "; cin >> maxRand;

		if (maxRand <= minRand)cout << "Error: Incorrect values" << endl;
	} while (maxRand <= minRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//����� ��������� �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//C��������� �������:
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//����� ���������������� �������
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//arr[i] - ��������� �������
	//arr[j] - ������������ �������  
#endif // MIN_MAX_RAND_SORT

#ifdef RAND_DUPLICATE
	const int n = 10;
	int arr[n];

	int minRand, maxRand;
	do
	{
		cout << "������� ����������� �����: "; cin >> minRand;
		cout << "������� ����������� ��������� �����: "; cin >> maxRand;

		if (maxRand <= minRand)cout << "Error: Incorrect values" << endl;
	} while (maxRand <= minRand);

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl << "\n";

	cout << "������������� ��������: ";

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n - 1; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << arr[i] << tab;
			}

		}
	}
	cout << endl << "\n";

	cout << "���������� ���������� ������� ��������: " << endl;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
				break;
			}

		}
		cout << arr[i] << " ����������� " << count << " ���" << endl;

	}
	cout << endl;
#endif // RAND_DUPLICATE


	}



	
