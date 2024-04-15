
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
  for(int i = 0; i <= 19; ++i){
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
  int f = 0;
  int j = 0;
  for (int i = 1; i < s.size(); ++i){
    switch(s[i]){
      case 'f':
      ++f;
    }
  }
  if (f <= 0){
    cout << "-2" << endl;
  } else if (f == 1){
    cout << "-1" << endl;
  } else if (f == 2){
    for (int i = 0; i < s.size(); ++i){
      if (s[i] == 'f'){
        j = i;
      }
    }
  cout << j << endl;
  }
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  if(a > 0 && b > 0 && a != b){
    if(a > b){
      int aux = a;
      a = b;
      b = aux;
    }
    int i = a;
    while(i >= 1){
      if (a % i == 0 && b % i == 0){
        return i;
        break;
      } else {
        i -= 1;
      }
    }
  }
  else {
    if (a > b){
      return a;
    } else if (a < b){
      return b;
    }
  }
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
  float U = 1;
  int V = 0;
  for (int i = 1; i <= 10; ++i){
    V += U;
    cout << "U" << i << " = " << U << "V" << i << " = " << V << endl;
    U /= (i + 1);
  }
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  long suma;
  long aux = 0;
  for(int i = 1; i <= n; i++){
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
  int res = 0;
  if (divider == 0){
    cout << "";
  } else {
    c = divident / divider;
    res = divident % divider;
    cout << c << " ";
    cout << res << endl;
  }
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