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
 
 /* 6번 
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
 */
 
 /* 7번 
  int main(){
 	freopen("input.txt", "rt", stdin);
 	char a[101], b[101];
 	int p = 0;
 	gets(a);
 	for(int i = 0; a[i] != '\0'; i++){
 		if(a[i] != ' '){
 			if(a[i] >= 65 && a[i] <= 90){
 				b[p++] = a[i] + 32;
			}
			else b[p++] = a[i];
		 }
	 }
	 b[p] = '\0';
	 printf("%s\n", b);
 	return 0;
 }  
 */
 
 /* 8번 
 int main(){
 	freopen("input.txt", "rt", stdin);
 	char a[100];
 	int i, cnt = 0;
 	scanf("%s", &a);
 	for(i =0; a[i] != '\0'; i++){
 		if(a[i] == '(') cnt++;
 		else if(a[i] == ')') cnt--;
 		if(cnt < 0) break;
	}
	if(cnt == 0) printf("YES\n");
	else printf("NO\n");
 	
 	return 0;
 }
 */
 
 /* 9번 
 int cnt[50001];
 int main(){
 	int n, i, j;
 	scanf("%d", &n);
 	for(i = 1; i <= n; i++){
 		for(j = i; j <= n; j = j+i){
 			cnt[j]++;
		 }
	 }
	 for(i = 1; i <= n; i++){
	 	printf("%d ", cnt[i]);
	 }
	 
 	return 0;
 } 
 */
 
 /* 10번 
 int digit_sum(int x){
 	int tmp, sum = 0;
 	while(x > 0){
 		tmp = x % 10;
 		sum += tmp;
 		x = x / 10;
	 }
	 return sum;
 }
 
 int main(){
 	freopen("input.txt", "rt", stdin);
 	int n, num, i, sum, max = -2147000000, res;
 	scanf("%d", &n);
 	for(i = 0; i < n; i++){
 		scanf("%d", &num);
 		sum = digit_sum(num);
 		if(sum > max){
 			max = sum;
 			res = num;
		}
		else if(sum == max){
			if(num > res) res = num;
		}
	 }
 	printf("%d\n", res);
 	return 0;
 } 
 */
 
 /* 11번 
 int main(){
 	int n, tmp, sum = 0;
 	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		tmp = i;
		while(tmp > 0){
			sum += 1;
			tmp = tmp / 10;
		}
	}
	printf("%d", sum);
 	
 	return 0;
 } 
 */
 
 int main(){
 	int n, sum = 0, c = 1, d = 9, res = 0;
 	scanf("%d", &n);
 	while(sum + d < n){
 		res = res+(c * d);
 		sum = sum + d;
 		c++;
 		d = d * 10;
	 }
	 res = res + ((n-sum) * c);
	 printf("%d\n", res);
 	
 	return 0;
 }
