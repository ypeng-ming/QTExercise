/* Use the slash-star style comments or the system won't see your
  identification information */
/*
ID: pengyon1
TASK: transform
LANG: C++
*/
#include<iostream>
using namespace std;
const int maxn = 1000;
char arr[maxn][maxn];
char arr1[maxn][maxn];
char temp[maxn][maxn];
int n;
bool pp1()
{
	int tempx = 1, tempy = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == arr1[tempx][tempy])
			{
				tempx++;
			}
			else
			{
				return false;
			}
		}	
		tempx = 1;
		tempy--;
	}
	return true;
}
bool pp2()
{
	int tempx = n, tempy = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == arr1[tempx][tempy])
			{
				tempy--;
			}
			else
			{
				return false;
			}
		}
		tempy = n;
		tempx--;
	}
	return true;
}
bool pp3()
{
	int tempx = n, tempy = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == arr1[tempx][tempy])
			{
				tempx--;
			}
			else
			{
				return false;
			}
		}
		tempx = n;
		tempy++;
	}
	return true;
}
bool pp4()
{
	int tempx = 1, tempy = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == arr1[tempx][tempy])
			{
				tempy--;
			}
			else
			{
				return false;
			}
		}
		tempy = n;
		tempx++;
	}
	return true;
}
bool pp5()
{
	int tempx = 1, tempy = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			temp[i][j] = arr[tempx][tempy];
			tempy--;
		}
		tempy = n;
		tempx++;
	}
	int flag = 0;
	tempx = 1, tempy = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (temp[i][j] == arr1[tempx][tempy])
			{
				tempx++;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if (flag==1)
		{
			break;
		}
		tempx = 1;
		tempy--;
	}
	if (flag==0)
	{
		return true;
	}
	flag = 0, tempx = n, tempy = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (temp[i][j] == arr1[tempx][tempy])
			{
				tempy--;
			}
			else
			{
				flag = 1;
				break;
			}
		}		
		if (flag == 1)
		{
			break;
		}
		tempy = n;
		tempx--;
	}
	if (flag == 0)
	{
		return true;
	}
	flag = 0,tempx = n, tempy = 1;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (temp[i][j] == arr1[tempx][tempy])
			{
				tempx--;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
		tempx = n;
		tempy++;
	}
	if (flag==0)
	{
		return false;
	}
	else
	{
		return false;
	}
}
bool pp6()
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] != arr1[i][j])
				return false;
		}
	}
	return true;
}
int main()
{
    	freopen("transform.in","r",stdin);
	freopen("transform.out","w",stdout);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			cin >> arr1[i][j];
		}
	}
	if (pp1())
	{
		cout << 1<<endl;
	}
	else if (pp2())
	{
		cout << 2<<endl;
	}
	else if (pp3())
	{
		cout << 3<<endl;
	}
	else if (pp4())
	{
		cout << 4<<endl;
	}
	else if (pp5())
	{
		cout << 5<<endl;
	}
	else if (pp6())
	{
		cout << 6<<endl;
	}
	else {
		cout << 7<<endl;
	}
	return 0;
}