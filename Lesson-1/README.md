# Основни елементи на С++. Вход и изход. Първа програма

## 1. Програма
- Редица от инструкции, водеща до решаване на определена задача.
- Инструкциите, с помощта на които се записва програма, изграждат език, наречен език за програмиране.
- Всеки компютър има свой собствен език за програмиране(машинен език) и може да изпълнява програми, написани на него.
- Машинният език е множество от машинни инструкции, които процесорът на компютъра може директно да изпълни.

## 2. Програма на машинен език
Програмата на машинен език  представлява редица от числа, записани в двоична позиционна система

## 3. В кои програми се пише програмен код ?
- a) Text editors / Текстови редактори
  - Examples : notepad / notepad++
- b) Integrated Development Environment(IDE)
  - Examples: Visual Studio, Visual Studio Code, Code Blocks, Eclipse(тези са препоръчителните за С++)
  - Examples_part2 : JetBrain, PhpStorm, Xcode, IntelliJ etc.

## 4. Причини да ползваме IDE
- a) Source code editor
- b) Compiler / Interpreter
- c) Syntax checking
- d) Debugger
- e) Autocomplete
- f) Refactoring
- g) Build automation

## 5. Основен синтаксис на езика С++
### 5.1) #...<  >
Директива, оказваща на компилатора да обработи предварително последващата информация, преди същинското  компилиране на програмата да е започнало.
#### 5.1.1)
Някои видове :
- #include
- #define
- #if
- #else
- #line
### 5.2) < iostream >
- Част от стандартен набор от библиотеки в C++ (The Standard Library)
- Input / Output stream | Поток за вход & изход
### 5.3) using namespace std
Директива за превенция на колизия на имена.
### 5.4) Comment
- // - Знак за коментар(за даден ред)
- /*  * /  - Знак за коментар(за даден интервал / множество от редове)
- Коментарите подсказват на програмиста за смисъла на следващото действие.
- Компилаторът НЕ изпълнява инструкциите, означени като коментар.
### 5.5) main
```cpp
int main()
{
    …
        return 0;
}
```
Дефинирана функция, наречена main(главна).Всяка програма на C++ е необходимо да има такава функция.
### 5.6) { ... }
Фигурни скоби, между които са записани редица от изпълними дефиниции, инструкции и оператори, които в цялата си съвкупност се наричат тяло на функцията.
### 5.7) cout, cin
“Си - аут”, “Си - ин”, имена на стандартен изходен и входен поток, които са за изход, обикновено екран или прозорец на екрана, а за вход – клавиатура, четец и др.
### 5.8) << , >>
Оператор за поточен изход и вход.
### 5.9) Data types
#### 5.9.1) int - цяло число - 4 bytes
#### 5.9.2) float - рационално число - 4 bytes
double - рационално число - 8 bytes
#### 5.9.3) char - символ - 1 byte
#### 5.9.4) bool - булева променлива - 1 byte
#### 5.9.5) Data type link : https://www.geeksforgeeks.org/c-data-types/

```cpp
#include <iostream> //STL - Standard Library
//iostream - input/output stream
using namespace std;

int main()
//int - type/data type
//main - name of the function
//main() - the brackets show no arguments
{
    cout << "Hello World!" << endl;
    
    return 0;
}
```

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Today is: " << 13 << endl;
    cout << "Today is: ";
    cout << 13;
    cout << endl;
    cout << "Today is: 13\n";
    
    return 0;
}
```

```cpp
//Data Types example
#include <iostream>
using namespace std;

int main()
{
    bool condition; // bool - 1 byte - true/false
    char symbol; //char - 1 byte - (ASCI table)
    int number; //integer - 4 byte - [-2 ^ 31 + 1; 2^31 - 1]
    float floatNumber; //float - 4 bytes
    double doubleNumber; //double - 8 bytes

    long long BiggerNumber; //integer - 8 bytes - [-2^63 ; 2^63 + 1]
    long double BiggerDoubleNumber; //long double number - 12 bytes
    short int a; //integer - 2 bytes - 
    unsigned b; //No negative numbers , integer , 4 bytes same as 'c'
    unsigned int c; //No negative numbers , integer , 4 bytes , same as 'b'
    unsigned long long d;
    
    return 0;
}
```


```cpp
//Quick Arithmetic tasks
#include <iostream>
using namespace std;

int main()
{
        //Assignment operator '='
    bool doYouLikeTheExamples = true; // True - 1, false - 0
    int a, b;
    //cin >> a;
    //cin >> b;
    cin >> a >> b;

    int c = 5, d = 2;

    //operator '+' , sum of N elements
    cout << "Sum of a and b: " << a + b << endl;
    cout << "Sum of c and d: " << c + d << endl;
    cout << "Is it true that you like the examples: " 
        << boolalpha << doYouLikeTheExamples << endl;
    //boolalpha checks bool's value, if it's 1 - cout: True, if it's 0 - cout: false

    double random1, random2;
    cin >> random1 >> random2;

    cout << random1 - random2 << endl;
    cout << random1 * random2 << endl;
    cout << random1 / random2 << endl;
    cout << 11 % 2 << endl;  //11 / 2 = 5 ост: 1
    
    return 0;
}
```
