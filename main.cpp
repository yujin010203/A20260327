#include <iostream>
#include "Engine.h"
#include "World.h"
#include "Actor.h"
#include "Player.h"
#include <fstream>


using namespace std;

class Singleton
{
private:
	Singleton();
	static Singleton* Instance;

public:
	static Singleton* GetInstance()
	{
		if (Instance == nullptr)
		{
			Instance = new Singleton();
		}

		return Instance;
	}
};

Singleton* Singleton::Instance = nullptr;


void SortSelection(int* Array)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (Array[i] < Array[j])
			{
				int temp = Array[i];
				Array[i] = Array[j];
				Array[j] = temp;
			}
		}
	}
}

void SortBubble(int Array[], int Number)
{
	for (int i = 0; i < Number - 1; i++)
	{
		for (int j = 0; j < Number - 1 - i; j++)
		{
			if (Array[j] > Array[j + 1])
			{
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}
}

int main()
{
	//GEngine->GetInstance();
	//GEngine->GetWorld()->Load("level01.umap");
	//GEngine->Run();

	int Data[10] = { 9, 1, 3, 5, 4, 6, 7, 8, 2, 10};

	//search and sort
	SortBubble(Data, 10);

	for (int i = 0; i < 10; i++)
	{
		cout << Data[i] << " ";
	}

	return 0;
}