
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
  int i = 0;
  while(i < s1.size()){
    if (s1[i] == ' '){
      cout << i << endl;
    }
  ++i;
  }
  cout << i << endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  string word;
  int i = 0;
  while (i < s1.size()){
    if(s1[i] == ' '){
      cout << "[" << word << "]" << endl;
      word = "";
    } else {
      word += s1[i];
    }
  ++i;
  }
  if (word.size() > 0){
    cout << "[" << word << "]" << endl;
  }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
  for(int i = 0; i <= 10; ++i){
    if(s1[i] == '1'){
      cout << "Om-nom-nom :P" << endl;
    } else if(s1[i] == '0'){
      cout << "No cake :(" << endl;
      break;
    }
  }
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
  int result = 1;
  if(n < 0){
    cout << "El numero es negativo. Intentelo de nuevo" << endl;
  } else if (n > 14){
    cout << "El numero es muy grande. Intentelo de nuevo" << endl;
  } else if (n == 0){
    cout << 1 << endl;
  } else {
    for(int i = 1; i <= n; ++i){
      result = result * (i);
     }
  cout << result << endl;
  }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  int res, sum = 0;
  while (n > 0){
    res = n % 10;
    sum = res + sum;
    n = n / 10;
  }
  return sum;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
  double ln = 0.0;
  double signo = 1.0;
  for(int i = 1; i <= n; ++i){
    ln += signo / i;
    signo *= -1.0;
  }
  cout << ln << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
  string spaces;
  string reversed;
  for(int i = 0; i >= s.size(); ++i){
    spaces += s[i];
  }
  for(int i = s.size() - 1; i >= 0; --i){
    reversed += spaces[i];
  }
  if(reversed == s){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  if(s == ""){
    cout << "YES" << endl;
  }
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE

}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE

  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
  float U = 1;
  for(int n = 0; n <= 10; n++){
    cout << "U" << n << " = " << U << endl;
    U /= (n + 1);
  }
}

void exercise_12() {
  // TODO: YOUR CODE HERE

}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  long suma;
  long aux = 0;
  for(int n = 1; i <= n; i++){
    suma = pow(i, k);
    aux = aux + suma;
  }
  return aux;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  string s = to_string(n);
  string reversed;
  for(int i = s.size() - 1; i >= 0; --i){
    reversed +=s[i];
  }
  if(reversed == s){
    return "Es palindrome";
  } else {
    return "No es palindrome";   
  }
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
  int res, mult = 1, acum = 0;
  while (decimal != 0){
    res = decimal % 2;
    decimal = decimal / 2;
    res = res * mult;
    mult = mult * 10;
    acum = acum + res;
    }
    cout << acum << endl;
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
  int c = 0;
  int res;
  while(divident >= divider){
    divident -= divider;
    ++c;
    res = divident;
  }
  cout << c << res << endl;
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
  int num = 2;
  int j = 0;
  while (j < n) {
    bool prime = true;
    for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
        prime = false;
        break;
      }
    }
  if (prime) {
    cout << num << " ";
    j++;
  }
  num++;
  }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}