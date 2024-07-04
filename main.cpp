#include <stdio.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* 1번 
int main() {
	int n, m, i, sum = 0;
	std::cin>>n>>m;
	for(i=1; i<=n; i++)
	{
		if(i%m==0){
			sum=sum+i;
		}
	}
	std::cout<<sum;
	return 0;
}
*/

/* 2번 
int main() {
	int a, b, sum = 0;
	cin>>a>>b;
	for(int i = a; i<b; i++)
	{
		cout << i << " + ";
		sum += i;
	}
	sum += b;
	cout << b << " = " << sum;
	return 0;
}
*/

/* 3번 
int main(){
	int n, sum = 1;
	cin >> n;
	cout << 1;
	for(int i = 2; i < n; i++)
	{
		if(n%i==0)
		{
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum;
	return 0;	
}
*/

/* 4번 
int main(){
	//freopen("input.txt", "rt", stdin);
	int n, a, max = INT_MIN, min = INT_MAX;
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cin>>a;
		if(a>max){
			max = a;
		}
		if(a<min){
			min = a;
		}
	}
	cout << max - min;
	return 0;	
}
*/

/* 5번 
int main(){
	//freopen("input.txt", "rt", stdin);
	char a[20];
	int year, age;
	scanf("%s", &a);
	if(a[7] == '1' || a[7] == '2') year = 1900 + ((a[0] - 48) * 10 + (a[1] - 48));
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] -48));
	age = 2019 - year + 1;
	printf("%d ", age);
	if(a[7] == '1' || a[7] == '3') printf("M\n");
	else printf("W\n");
	
	return 0;
 } 
 */
 
 int main(){
 	freopen("input.txt", "rt", stdin);
 	char a[100];
 	int res = 0, cnt = 0, i;
 	scanf("%s", &a);
 	for(int i = 0; a[i] != '\0'; i++){
 		if(a[i] >= 48 && a[i] <= 57){
 			res = res * 10 + (a[i] - 48); 			
		 }
	 }
	 printf("%d\n", res);
	 for(int i = 1; i <= res; i++){
	 	if(res % i == 0) cnt++;
	 }
	 printf("%d\n", cnt);
 	
 	return 0;
 } 
