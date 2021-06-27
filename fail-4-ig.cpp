#include <iostream>
using namespace std;
struct STOCK
{
    string name;
    double price;
};
STOCK* prependNode(STOCK* head, string name, double price)
{
    STOCK* newNode = new STOCK;
    newNode->name = name;
    newNode->price = price;
    head = newNode;
    return head;
}
void displayList(STOCK* head)
{
	STOCK* list = head;
	int count = 0;
	while (list != NULL)
	{
		cout << list->name << " ";
		cout << list->price << " ";
		cout << endl;
	}
}
int main()
{
	const int num = 3;
	int arr[num];
	double price; string name;
	cin >> name >> price;
	for (int i = 0; i < num; i++)
	{
		int tmpMin = arr[i];
		for (int j = i + 1; j < num; j++)
		{
			if (arr[j] < tmpMin)
			{
				tmpMin = arr[j];
				arr[j] = arr[i];
				arr[i] = tmpMin;
			}
		}
	}
	cout << endl << name[0] << name[1] << name[2] << endl;
	return 0;
}