[TOC]
# C++ Primer Plus读书笔记
## 基本类型——整型
1. C++不允许将函数定义嵌套在另一函数定义中。
2. 命名规则:  
    * 函数使用字母、字符、数字下划线；
    * 第一个字符不能是数字；
    * 区分大小写；
    * 不能使用关键字；
    * **以两个下划线或下划线和大写字母打头的名称被保留给实现（编译器及其使用的资源）使用，以下划线开头的名称被保留给用作全局标识符（全局名称指的是名称被什么的位置）**
3. C++基本整形（按宽度递增）：`char，short，short int，int，long，long long`，分有符号与无符号，所以共有10种。
4. short至少16位；int至少与short一样长；long至少32位且至少与int一样长；long long至少64位，且至少与long一样长。
5. 位bit 字节byte：8位的内存单元 1KB=1024字符
6. `sizeof`运算符返回类型或变量长度，单位为字节。
7. 初始化变量 `int enum={5}； int enum{5} ；int enum{}（为0）`
8. unsigned本身是`unsigned int` 的缩写
9. 整形变量行为就像里程表，超越限制其值降维另一端的取值，C++确保了无符号类型的行为，但不保证符号整形超越限制（上溢和下溢）时不出错。
10. 变量可能表示的整数值大于16位整数最大可能值，使用long，存储值超过20亿可使用longlong。
11. 仅当有大型整型数值时，才有必要使用short
12. 第一位为1-9为10进制，第一位为0，第二位为1-7为8进制，前两位为0x为16进制。
13. cout提供了控制符`dec，hex，oct`以十进制、16进制、8进制显示整数。
14. L表示long UL表示`unsigned long LL：longlong ULL：unsigned long long`。对不带后缀的十进制整数，使用`int long，long long，unsigned int long ，unsigned long，long long或unsigned long long`能存储该数的最小类型表示。
15. char虽常用来处理字符，但也可以将它用作比short更小的整型。
16. C++字符用单引号''，对字符串使用双引号""。
17. 转义序列编码： `\n`换行符 `\t`水平制表符 `\v`垂直制表符 `\b`退格 `\r`回车 `\a`振铃。
18. 与int不同的是char在默认情况下既不是没有符号也不是有符号
19. `wchar_t`宽字符类型表示扩展字符集
`char16_t,char32_t`分别表示16位无符号与32位无符号
分别用u和U表示`char16_t,char32_t`字符常量和字符串常量。
20. `const`限定符 符号常量将首字母大写
用法 `const type name=value`，声明常量时若没有提供值，则该常量值是不确定的，且无法修改。
（`const`优于`#define` 明确类型；作用域规则；用于复杂类型）  
***
## 基本类型——浮点型
1. 浮点数float
+d.dddE+n 指小数点向右移n位 +d.dddE-n指小数点向左移n位 
E之前不能有空格
2. C和C++对有效位数的要求是float至少32位，double至少48位且不少于float，long double至少和double一样多，通常float 32位，double 64位，long double为80、96或128位。另外，这三种类型的指数范围至少是-37到37.
3. float类型后缀f或F，long double型后缀L，默认情况double型，浮点数表示的范围比整数大，但运算速度慢，精度低。
4. signed char，short，int，long统称符号整型，其无符号版本统称为无符号整型。
bool，char，wchar_t符号整型和无符号整型统称整型。
float,double,long double统称浮点型。
整型和浮点型统称算术（drithmetic）型。
5. 如果两个操作数都是除法，则结果为商的整数部分，小数部分被丢弃。
6. %求模 两操作数必须为整型，用于浮点数会编译错误，如果其中一个为负数，结果的符号满足：**`(a/b)+a%b=a`**
7. 运损福优先级相同时，C++将看操作数的结合行（associativity）是从左到右还是从右到左。
8. 对不同类型进行计算时，C++将它们全部转换为同一类型。若操作数皆为double则结果为double，若皆为float，则结果为float。浮点常量在默认情况下为double。
9. 运算符重载（operator overloading）使用相同的符号进行多种操作。
10. C++自动执行很多类型的转换：
    * 将一种算数类型值赋给另一种算术类型变量；
    * 表达式包含不同算术类型；
    * 参数传递给函数时。
11. 浮点数转换成整型时采取截取而不是四舍五入。
12. 以`{}`初始化称为列表初始化，不允许缩窄
13. 强制类型转换通用格式：
`(typename) value` C语言风格
`typename value` C++风格
14. `auto`声明不指定变量类型，将其类型设置为与初始值相同。
***
## 基本类型总结
C++基本类型分为两组整数、浮点数
* 整型从小到大：`bool,char,signed char,unsigned char,short,unsigned short,int,unsigned int,long,unsigned long,long long,unsigned long long`
`short`至少16位，`int`至少与`short`一样长，`long`至少为32位至少和`int`一样长。
* 三种浮点类型分别为：`float,double,long double`
确保`float`不比`double`长，`double`不比`long double`长，通常`float` 32位，`double` 64位，`long double` 80-128位。
***
## 复合类型
### 数组
1. 数组声明应指出：
    * 存储在每个元素种值的类型；
    * 数组名；
    * 数组中元素数。
> `typename arrayName[arraySize]`  `arragSize`必须是整型常量或`const`值也可以是常量表达式。  
2. C++数组从0开始编号。
3. 数组初始化规则：
    * 只有定义数组时才能使用初始化，此后不能再使用，也不能将一个数组赋给另一个数组
    * 可以使用下班分别给数组元素赋值
    * 对数组部分初始化则编译器将其他元素设置为0.
    * 初始化时数组[]中为空，则计算实际元素个数。
4. C++11列表初始化新增功能：
    * 初始化时可省略等号 `double earnings[4] {}`
    * 可不在大括号内包含任何东西，将所有元素置0
    * 列表初始化禁止缩窄转换。  
### 字符串
1. C++处理字符串方式有两种，一种是来自C语言（C-style string）；另一种基于string类库的方法。
2. C风格字符串必须以空字符（null character）结尾，空字符被写作\0，ASCII码为0.用来标记字符串结尾。确定存储字符串所需最短数组时，要将空字符计算在内。
3. 表示字符常量使用`'S'`，表示字符串常量使用`"S"`。
4. 任何两个由空白（空格、制表符和换行符）分隔的字符串常量会被自动拼接成一个。
5. 字符数组的长度不能短于`strlen(cosmic)+1`
6. `cin.getline(arrayName.arraySize)` 通过换行符确定行尾，但不保存换行符。
>第三个参数暂不讨论，后续讨论  
7. `cin.get()`一种变体与上一函数参数类似，但将换行符留在输入队列中；
还有另一种变体`cin.get()`不带参数 可读取下一字符，具体使用方法：
```C++
cin.get(arrayName1.Size);
cin.get();
cin.get(arrayName2,Size);
```
或：
```C++
cin.get(arrayName1.Size).get();
cin.get(arrayName2,Size);
```
8. String类隐藏了字符串的数组性质：
    * **不能将一个数组赋给另一个数组，可以将一个`String`对象赋给另一个`String`对象；
    * 可以使用运算符`+`合并字符串，使用`+=`将字符串加到末尾；
9. 原始（raw）字符串 `P87`。
### 结构
1. 结构的定义方式：
```C++
struct structType
{
    type name;
    ...
};
structType name=
{
    value,
    value
};
```
2. C++允许在声明结构变量时省略关键字`struct`。 可以使用成员运算符`(.)`来访问各个成员。
3. **C++不提倡使用外部变量，但提倡使用外部结构声明，另外在外部声明符号常量更合理。**
### 共用体
共用体（union）是一种数据格式，能存储不同的数据类型，但只能同时存储一种类型，常用于节省内存，用于操作系统数据结构或硬件数据结构。
### 枚举
1. 使用赋值运算符显式的设置枚举量的值：
```C++
enum bits{one=1,two=2,four=4,eight=8};
```
也可以只显式的定义其中一些枚举量的值，没有被初始化的枚举量的值将比前面的枚举量大1.
```C++
enum bigstep{first,second=100,third}
```
这里`first`的默认情况为0，没被初始化的枚举量比前面大1，所以`third`为101.
可以创建多个值相同的枚举量：
```C++
enum{zero,null=0,one,numero_uno=1};
```
其中，zero和null都为0.
2. 枚举的取值范围定义：要找出上限，知道枚举量的最大值，找到大于最大值最小的2的幂，将他减去1，得到的便是取值范围的上限；下限，要知道枚举量的最小值，如果它不小于0，则取值范围的下限为0；否则寻找小于最小值的最大2的幂，减去-1.
### 指针和自由存储空间
1. 变量的地址 变量名前加 &
2. 指针用于存储值得地址，指针名表示的是地址 
**`*`** 运算符被称为间接值或解除引用运算符，应用于指针可得到改地址处存储的值。如`mainly`是一个指针，则 **`manly`** 表示地址，**`*manly`** 表示存储在该处的值。
3. `updates`和`* p_updates`完全等价表示值，`&updates`和`p_dates`完全等价表示地址。
4. **一定要在对指针应用解除引用运算符（*）之前，将指针初始化为一个确定的、适当的地址。**
5. 要将数字值作为地址来用，应通过强制类型转换将数字转换为适当的地址类型：
```C++
int *pt;
pt=(int *) 0xB8000000;
```
6. 指针真正的用处：在运行阶段分配未命名的内存以存储值
为一个数据对象（可以是结构或基本类型）获得并指定分配内存的通用格式：
```C++
typeName * pointer_name = new typeName;
```
7. `delete`删除内存：
```C++
int *ps=new int ;
...
delete ps;
```
这将释放ps指向的内存，但不会删除ps本身，可将ps重新指向另一个新分配的内存块。**不能用delete释放声明变量获得的内存**，例如：
```C++
int juge=5;
int *pi=&jugs;
delete pi;
```
8. 数组静态联编和动态联编。
使用new创建动态数组：
```C++
typeName *pointerName=new typeName [num]; 
delete [] psome;
```
9. 总之，使用`new`和`delete`时应注意遵守以下规则：
    * 不要使用delete释放不是new分配的内存块；
    * 不要使用delete释放同一个内存块两次；
    * 如果使用new[ ]为数组分配内存，则应使用delete[ ]来释放；
    * 如果使用new为一个实体分配内存，则应使用delete（没有方括号）来释放；
    * 对空指针应用delete是安全的。
10. 指针与数组名：
>使用数组表示法时：arrayName[i] becomes *(arrayName+1)
使用指针表示法时： pointName[i] becomes *(pointName+1)  

区别是可以修改指针的值但是数组名是常量。另外，对数组应用`sizeof`得到的是数组的长度而对指针得到的是指针的长度。
11. `&tell[0]`和`tell`都是第一个元素的地址；`&tell`是整个数组内存块的地址。
12. 在cout和C++表达式中，char数组名、char指针以及用引号括起的字符串常量都被解释为字符串第一个字符的地址。
13. 使用new创建动态结构
`structType *ps = new structType`
对于指针不能用成员运算符`.`应该使用`->`来访问成员（如果结构标识符是结构名，则使用句点运算符；如果是指向结构的指针，则使用箭头运算符）
14. **自动存储** 在函数内部定义的常规变量使用自动存储空间，被称为自动变量（automatic variable），这意味着在所属函数被调用时自动产生，在函数结束是消亡。自动变量是局部变量作用域为包含它的代码块。通常存储在栈中，按后进先出（LIFO）。
**静态存储** 是整个程序执行期间都存在的存储方式。使变量成为静态的方式：函数外面定义；声明变量时使用关键字`static`，严格限制了变量的寿命
```cpp
static type name=value
```
**动态存储** `new`和`delete`管理了一个内存池，在C++中被称为自由存储空间（free store）或堆（heap）。
15. 避免内存泄漏的最好方法是同时使用`new`和`delete`，***智能指针***
### 类型组合
P119
### 数组的替代品
1. 模板类`vector`使用时要包含头文件：
```cpp
#include<vector>
using namespace std;
vector<typeName> vt(num);  //创建名为vt的vector对象，可存储num个typeName元素，num可以是整型常量也可以是整型变量。
```
2. 模板类array（C++11）其对象长度是固定的，也使用栈（静态内存分配） 创建语法：
```cpp
#include<array>
using namespace std;
array<typeName,num> arr; //与vector不同的是num不能是变量
```
3. 数组、vector对象、array对象都可以用标准数组表示法访问各元素；array和数组存储在相同内存区域（栈）vector存储在另一区域（自由存储区或堆）；array对象可以赋值给另一对象而数组必须逐元素复制。
## 循环和关系表达式
1. 通常cout显示bool值之前将其转换为int，但`cout.setf(ios::boolalpha)`函数调用设置了一个标记命令cout显示true和false。 
2. 可以在for循环的初始化部分声明变量，但这种变量只存在于for语句中，程序离开循环后变量消失。
3. 自增与自减 前缀（prefix）`++x` 后缀（postfix）`x++` 
    ```cpp 
    //prefix
    int x = 5;
    int y= ++x; //changge x, then assign to y, y is 6, x is 5
    ```
    ```cpp
    //postfix
    int z = 5;
    int y = z++; //assign z to y,then change z; y is 5, z is 6
    ```
4. 递增\递减运算符和指针：将*和++同时用于指针，前缀递增、前缀递减和解除引用运算符优先级相同，以从右到左的方式结合（例如：`*++p`，先将++用于pt然后 `*` 应用于递增后的pt）后缀递增和后缀递减优先级相同，但比前缀运算符优先级高，以从左到右的方式结合。
`x = *pt++;`后缀运算符优先级高，意味着将运算符用于pt而不是*pt，而后缀运算符意味着对原来的地址而不是递增后的新地址解除引用，因此 `*pt++` 的值为原地址的值，但语句执行完毕后pt的值为递增后的地址。
5. 复合语句：用花括号构造复合语句（代码块），在代码块中定义一个新变量只有在执行该语句块时变量才存在，执行完毕后变量释放。
*如果语句块中声明一个变量外部也有一个这种变量，在声明位置到内部语句块结束的范围之内，新变量将隐藏旧变量；然后变量再次可见。*
6. 逗号运算符：最常见用途将两个或者更多表达式放到一个for循环表达式中；逗号表达式是第二部分的值；逗号的优先级是最低的。
7. 关系运算符优先级比算术运算符低。
8. 类型别名，建立别名的方式：
    * 使用预处理器,char替换所有的BYTE
    ```cpp
    #define BYTE char; //preprocessor replaces BYTE with char
    ```
    * 使用关键字`typedef`创建别名，不会创建新类型，只是为已有类型建立新名称
    ```cpp
    typedef typeName aliasName; //make aliasName an alias for typeName
    ```
    **使用`#define`不过声明一系列变量时不适用，例如：**
    ```cpp
    #define FLOAT_POINTER float *
    FLOAT_POINTER pa,pb;
    float * pa,pb; //pa a pointer to float,pbjust a float
    ```
9. 基于范围的for循环 对数组或容器类每个元素执行相同的操作：
    ```cpp
    double prices[5]={4.99,10.99,6.87,7.99,8.49};
    for (double x : prices)
        cout << x << endl;
    ```
    要修改数组的元素，可使用引用变量：
    ```cpp
    for (double &x : prices)
        x=x * 0.80;
    ```
10. `char * name[size]={"Jan","Feb"}` char*数组

## 分支语句和逻辑运算符
1. 将更直观的表达式`variable == value`反转为`value == variable`来捕获将相等运算符误写为赋值运算符的错误。
2. 逻辑 或运算符 `OR(||)` 这个运算法是个顺序点（sequence point） 左边子表达式先于右边子表达式（先计算左边再计算右边） **冒号和逗号运算符也是顺序点**
与运算符 `AND(&&)` 
非运算符 `NOT(!)
3. **`!`非运算符的优先级高于所有关系运算符和算术运算符，因此要对表达式求反必须用括号括起。**
`&&`运算符优先级高于`OR`运算符
4. 逻辑运算符另一种表示：

| 运算符 | 另一种表示 |
| ---- | ---- |
| `&&` | and |
| `||` | or |
| `!` | not |
5. 字符函数库 cctype 简化诸如确定字符是否为大写字母、数字、标点符号等工作
6. `?:`运算符 条件运算符 C++中唯一一个需要3个操作数的运算符，通用格式：`expression1 ? exxpression2 : expression3` 如果expression1为true则整个表达式的值为expression2的值，否则为expression3的值。
7. switch语句 dafault可选，如果被省略又没有匹配的标签，则程序跳到switch后面的语句处执行。
```cpp
switch (integer-expression)
{
    case label1 : statements
    case label2 : statements
    ...
    default : statements
}
```
8. `if else` 语句更适用于取值范围；switch语句每个case标签必须是单独的值。
9. `break`语句使程序跳到switch或循环后面的语句处执行，即结束选择或循环
 `continue`语句用于循环时，让程序跳过循环体中余下的代码并开始新循环，并没有结束循环。
10. C++也有`goto`语句 `goto paris` 跳到使用Paris作为标签的位置。
11. 文本I/O和文本文件
    1. 使用文件输出的主要步骤 
        * 包含头文件fstream
        * 创建一个ofstream对象
        * 将该ofstream对象同一个文件关联起来
        * 像使用cout那样使用ofstream对象。
    2. 使用文本读取 除非输入的文件名包含路径，否则程序将在可执行文件所属的文件夹中查找

***结构中字符串数组赋值时不能使用赋值符号，必须使用字符串赋值函数。***

## 函数
1. 定义函数：有返回值与无返回值
无返回值函数称为void函数，通用格式
```cpp
void functionName(parameterList)
{
    statement(s)
    return; //optional
}
```
有返回值函数，通用格式：
```cpp
typeName functionName(parameterList)
{
    statements;
    return value; //value is type cast to type typeName
}
```
**C++对于返回值的类型有一定限制：不能是*数组*，但可以使其他任何类型，甚至可以是结构和对象（虽然不能直接返回数组，但可以将数组作为结构或对象组成部分来返回）。** 

2. 函数在执行返回语句后结束，函数执行遇到第一条返回语句后结束。
3. 函数原型是必不可少的，但是函数原型不要求提供变量名，只提供变量类型即可。
4. 用于接收传递值的变量称为形参，用parameter参量表示形参，传递给函数的值称为实参，用参数argument表示。
5. C++将数组名解释为其第一个元素的地址。但是有一些例外：
    1、数组声明使用数组名来标记存储位置；
    2、对数组使用`sizeof`将得到整个数组的长度（以字节为单位）；
    3、将地址运算符&应用于数组名时，将返回整个数组的地址。
6. 在函数参数中可以使用`int Arr[]`传入的是数组第一个元素的地址，但是在函数体内不能使用。
7. `const double arr[]`表明指针指向常量数据，不能使用arr修改数据（只读）。
8. 使用数组区间的函数`int sumArr(const int *begin,const int *end)`开始的位置与结束的位置，必须按正确的位置传递指针。
9. `const int *p` 其中const修饰int表示指针指向常量，即*p必须为常量；  
   `int * const p` 其中const修饰p表示指针为常量，指针的位置不能变。
10. 