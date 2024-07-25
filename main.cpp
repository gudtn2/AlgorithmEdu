#include <stdio.h>
#include <algorithm>

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
 
 /* 12번 
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
 */
 
 /* 13번 
 int ch[10];
 int main(){
 	int digit, max = -2147000000, res;
 	char a[101];
 	scanf("%s", &a);
 	for(int i = 0; a[i] != '\0'; i++){
 		digit = a[i] - 48;
 		ch[digit]++;
	 }
	for(int i = 0; i <= 9; i++){
		if(ch[i] >= max){
			max = ch[i];
			res = i;
		}
	}
	printf("%d\n", res);
 	
 	return 0;
 }
 */
 
 /* 14번 
 int reverse(int x){
 	int res = 0, tmp;
 	while(x > 0){
 		tmp = x % 10;
 		res = res * 10 + tmp;
 		x = x / 10;
	 }
	 return res;
 }
 
 bool isPrime(int x){
 	if(x == 1) return false;
 	bool flag = true;
 	for(int i = 2; i < x; i++){
 		if(x % i == 0){
 			flag = false;
 			break;
		 }
	 }
	 return flag;
 }
 
 int main(){ 	
 	int n, num, tmp;
 	scanf("%d", &n);
 	for(int i = 1; i <= n; i++){
 		scanf("%d", &num);
 		tmp = reverse(num);
 		if(isPrime(tmp)) printf("%d ", tmp);
	 }
 	
 	return 0;
 }
 */
 
 /* 15번 
 int main(){
 	int n, i, j, flag, cnt = 0;
 	scanf("%d", &n);
 	for(i = 2; i <= n; i++){
 		flag = 1;
 		for(j = 2; j * j <= i; j++){  //j * j로 제곱을 해준다 
 			if(i % j == 0){ 
 				flag = 0;
 				break;
			 }
		 }
		 if(flag == 1) cnt++;
	 }
	 printf("%d\n", cnt);
 	
 	return 0;
 } 
 */
 
 /*
 // 알파벳의 아스키코드를 사용  
 // 대문자 아스키코드 65 ~ 90 소문자 97 ~ 122 
 // 대문자 배열이 26까지 이므로 소문자 배열이 27부터 오도록 -70 
 int a[60], b[60]; 
 int main(){ 
 	char str[100];
 	int i;
 	scanf("%s", &str);
 	for(i = 0; str[i] != '\0'; i++){ 
 		if(str[i] >= 65 && str[i] <= 90){
 			a[str[i] - 64]++;
		 }
		 else a[str[i] - 70]++;
	 }
	scanf("%s", &str);
 	for(i = 0; str[i] != '\0'; i++){
 		if(str[i] >= 65 && str[i] <= 90){
 			b[str[i] - 64]++;
		 }
		 else b[str[i] - 70]++;
	 }
 	for(i = 1; i <= 52; i++){
 		if(a[i] != b[i]){
 			printf("NO\n");
 			exit(0);
		 }
	 }
	 printf("YES\n");
 	
 	return 0;
 }
 */
 
 int main(){
 	int n, sum = 0, i, j, m, ans; 	
 	scanf("%d", &n);
 	
 	for(i = 1; i <= n; i++){
		scanf("%d %d", &m, &ans);
		sum = 0; // sum을 초기화 해줄것  
		for(j = 1; j <= m; j++){
			sum += j;
		}
		if(ans == sum) printf("YES\n");
		else printf("NO\n");
	 } 	
 	
 	return 0;
 }
