## shift 연산
  - 각 2진수로 표현한 수의 각 자릿수가 1인지 0인지 판단하는 방법 : shift를 사용하면 간결하다.

```cpp
int num = ...;

// num이 0이 될때까지 shift 연산
for(int i=0; (num>>i) >0; ++i){
  // num의 j번째 자리수가 1인 경우!
  if((num>>j) %2){
    ...
  }
}
```
