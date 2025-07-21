// 定义了cin cout cerr clog 等输入输出流对象 
// 分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
#include <iostream> 

#include <vector>
#include <array> // 添加此行以支持 std::array
#include <map>
#include <set>
#include <string>
#include <cstring> //strcpy
using namespace std; // 可以用cout 代替 std::cout

#include <ctime>

// This is a comment
// This is a multi-line comment
/*
This is a multi-line comment
*/

// #define LENGTH 10   
// #define WIDTH  5
// #define NEWLINE '\n'


// 逻辑运算符用于对布尔值进行逻辑运算，返回布尔值。
// 常用的逻辑运算符有：与（&&）、或（||）、非（!）
// 与运算符（&&）：当且仅当两个操作数都为 true 时，结果为 true。
// 或运算符（||）：当至少一个操作数为 true 时，结果为 true。
// 非运算符（!）：对操作数取反，如果操作数为 true，则结果为 false；如果操作数为 false，则结果为 true。
// a && b
// a || b

namespace infomation {
    bool boolean_is_me;
    char char_is_me;
    wchar_t wchar_is_me; // 宽字符类型，通常用于表示 Unicode 字符
    char16_t char16_is_me; // 16 位字符类型，通常用于表示 UTF-16 编码的字符
    char32_t char32_is_me; // 32 位字符类型，通常用于表示 UTF-32 编码的字符

    // std::string 是 C++ 标准库中的字符串类，用于处理字符串
    // std::wstring 是 C++ 标准库中的宽字符串类，用于处理宽字符字符串
    std::string string_is_me;
    std::wstring wstring_is_me; // 宽字符串类型，通常用于表示 Unicode 字符串

    int int_is_me;
    float float_is_me;
    double double_is_me;
    short short_is_me; // short：表示变量的范围比 int 更小。short int 可以缩写为 short。
    long long_is_me; // long：表示变量的范围比 int 更大。long int 可以缩写为 long。
    // const 定义常量，表示该变量的值不能被修改。
    const int const_int_is_me = 3; // const int is a constant integer

    // unsigned：表示变量不能存储负数。对于整型变量来说，unsigned 可以将变量范围扩大一倍。
    unsigned int unsigned_int_is_me;
    unsigned short unsigned_short_is_me;
    unsigned long long unsigned_long_long_is_me;

    char char_is_me2 = 'a'; // char：表示单个字符，通常用于存储 ASCII 字符。
    auto auto_is_me = char_is_me; // auto is a type that is deduced by the compiler
    decltype(auto_is_me) decltype_auto_is_me; // decltype is a type that is deduced by the compiler

    std::initializer_list<int> initializer_list_is_me = {1,2,3}; // initializer_list is a type that is used to initialize a list of values
    std::tuple<int, float, char> t(1, 2.0, 'a');

    int array_is_me[5] = {1, 2, 3, 4, 5}; // 数组
    int* pointer_is_me = &int_is_me; // 指针 储存变量内存地址的类型
    int& reference_is_me = int_is_me; // 引用 变量的别名
    int function_is_me(int a, int b) { // 函数
        return a + b; // 函数体
    };

    // 结构体是 C++ 中的一种用户自定义数据类型，可以包含多个不同类型的成员变量。
    // 结构体的作用是将相关的数据组合在一起，形成一个新的数据类型。
    // 结构体可以包含多个不同类型的成员变量，也可以包含成员函数。
    // 结构体的成员变量可以是基本数据类型、其他结构体、类、联合体等。
    // 结构体的成员函数可以访问结构体的成员变量，也可以修改它们的值。
    // 简单数据封装：适合封装多种类型的简单数据，通常用于数据的存储。
    // 轻量级：相比 class，结构体语法更简洁，适合小型数据对象。
    // 面向对象支持：支持构造函数、成员函数和访问权限控制，可以实现面向对象的设计
    struct struct_is_me { // 结构体 可以包含多个不同类型的成员
        int member_int;
        float member_float;
        char member_char;
        
    };



    // volatile：表示变量的值可能会被外部因素改变，编译器不会对其进行优化。如硬件或其他线程。
    // restrict：表示指针指向的内存区域不会被其他指针访问，编译器可以对其进行优化。
    // 这两个关键字通常用于优化性能，但在现代 C++ 中不常用。
    // volatile 和 restrict 在 C++ 中不是常用的关键字，主要用于 C 语言。
    // mutable：mutable 用于修饰类的成员变量。被 mutable 修饰的成员变量可以被修改，即使它们所在的对象是 const 的。
    // static：static 用于修饰变量或函数。被 static 修饰的变量或函数的作用域仅限于当前文件或类，不能被其他文件或类访问。

    // 存储类
    // auto：auto 是 C++11 引入的关键字，用于自动推导变量的类型。编译器会根据变量的初始值来推导其类型。
    // extern：extern 用于声明变量或函数的外部链接性。它告诉编译器该变量或函数在其他文件中定义，可以在当前文件中使用。
    // static：static 用于声明变量或函数的内部链接性。它告诉编译器该变量或函数只能在当前文件中使用，不能在其他文件中访问。
    // thread_local：thread_local 用于声明线程局部存储变量。每个线程都有自己的副本，线程之间不会共享该变量的值。
    // mutable：mutable 用于修饰类的成员变量。被 mutable 修饰的成员变量可以在 const 成员函数中被修改，即使它们所在的对象是 const 的。
    // thread_local：thread_local 用于声明线程局部存储变量。每个线程都有自己的副本，线程之间不会共享该变量的值。
    // 从 C++ 17 开始，auto 关键字不再是 C++ 存储类说明符


    class MutableExample {
    public:
        int get_value() const {
            return value_; // const 关键字表示该成员函数不会修改对象中的数据成员
        }
        void set_value(int value) const {
            value_ = value; // mutable 关键字允许在 const 成员函数中修改成员变量
        }
    private:
        mutable int value_;
    };



    class class_is_me { // 类 可以包含多个不同类型的成员和方法
    public:
        int member_int;
        float member_float;
        char member_char;
    };

    union union_is_me { // 联合体 可以包含多个不同类型的成员，但只能存储一个成员的值
        int member_int;
        float member_float;
        char member_char;
    };

    enum enum_is_me { // 枚举 可以定义一组命名的常量
        VALUE_ONE,
        VALUE_TWO,
        VALUE_THREE
    };

    // 枚举类 可以定义一组命名的常量，具有更强的类型安全性
    // 枚举类的作用是为了避免枚举值的命名冲突
    // 枚举类的值是作用域限定的，不能直接使用枚举值，需要使用枚举类名限定
    // 枚举类的值可以指定底层类型，默认是 int 类型
    enum class enum_class_is_me { // 枚举类 可以定义一组命名的常量
        VALUE_ONE,
        VALUE_TWO,
        VALUE_THREE
    };

    // 标准库类型
    std::vector<int> vector_is_me = {1, 2, 3, 4, 5}; // 向量 是一个动态数组，可以自动调整大小
    std::string string_is_me2 = "Hello, World!"; // 字符串 是一个动态数组，可以自动调整大小std
    std::array<int, 5> array_fixed_size_is_me = {1, 2, 3, 4, 5}; // 固定大小数组 是一个固定大小的数组，大小在编译时确定

    std::pair<int, float> pair_is_me = {1, 2.0}; // 对 是一个包含两个值的类型
    std::map<int, std::string> map_is_me = {{1, "one"}, {2, "two"}, {3, "three"}}; // 映射 是一个键值对的集合，可以通过键访问值
    std::set<int> set_is_me = {1, 2, 3, 4, 5}; // 集合 是一个不允许重复元素的集合

}


// 声明一个结构体类型 Books 
struct Books
{
char  title[50];
char  author[50];
char  subject[100];
int   book_id;
};

void printBook( struct Books book );   
int main() {
    std::cout << "Hello CMake!" << std::endl;
    std::cout << "Hello Cpp!" << std::endl;


    const int  LENGTH = 10;
    const int  WIDTH  = 5;
    const char NEWLINE = '\n';
    cout <<"It is a new line!" << NEWLINE << endl;

    int larger_int = max(LENGTH, WIDTH); // 调用 max 函数
    cout << "Max value is : " << larger_int << endl; 


// Lambda 函数与表达式
// C++11 提供了对匿名函数的支持,称为 Lambda 函数(也叫 Lambda 表达式)。
// Lambda 表达式把函数看作对象。Lambda 表达式可以像对象一样使用，
// 比如可以将它们赋给变量和作为参数传递，还可以像函数一样对其求值。
// Lambda 表达式本质上与函数声明非常类似。Lambda 表达式具体形式如下:
// [capture](parameters)->return-type{body}
    auto lambda_function = [](int a, int b) -> int {
        return a + b; // Lambda 函数体
    };
    cout << "Lambda function result: " << lambda_function(3, 4) << endl;

// Lambda 表达式的捕获列表（Capture List）
// 捕获列表用于指定 Lambda 表达式可以访问的外部变量。捕获列表位于方括号 [] 中。
// 捕获列表可以为空，也可以包含一个或多个变量名，或者使用特殊符号来指定捕获方式。
// 捕获方式有两种：按值捕获和按引用捕获。
// 按值捕获会复制外部变量的值，而按引用捕获则允许 Lambda 表达式直接访问外部变量的地址。
// 捕获列表可以为空，也可以包含一个或多个变量名，或者使用特殊符号来指定捕获方式。

// 在Lambda表达式内可以访问当前作用域的变量，这是Lambda表达式的闭包（Closure）行为。 与JavaScript闭包不同，C++变量传递有传值和传引用的区别。可以通过前面的[]来指定：
// []      // 沒有定义任何变量。使用未定义变量会引发错误。
// [x, &y] // x以传值方式传入（默认），y以引用方式传入。
// [&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
// [=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
// [&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
// [=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。


    int int_var = 10;
    int *pointer_var = &int_var;

    cout << "\nValue of int_var: ";
    cout << int_var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address of int_var: ";
    cout << pointer_var << endl;

    // 访问指针中地址的值
    cout << "Value at address stored in pointer_var: ";
    cout << *pointer_var << endl; 


    // 通过指针修改 int_var 的值
    *pointer_var = 20;
    cout << "New value of int_var: ";
    cout << int_var << endl;

    // 基于当前系统的当前日期/时间
    time_t time_now = time(0);
    // 把 now 转换为字符串形式
    char* dt = ctime(&time_now);
    cout << "\n本地日期和时间：" << dt << endl;


    Books Book1;        // 定义结构体类型 Books 的变量 Book1
    
    // Book1 详述
    strcpy( Book1.title, "C++ 教程");
    strcpy( Book1.author, "Runoob"); 
    strcpy( Book1.subject, "编程语言");
    Book1.book_id = 12345;
    
    // 输出 Book1 信息
    cout << "第一本书标题 : " << Book1.title <<endl;
    cout << "第一本书作者 : " << Book1.author <<endl;
    cout << "第一本书类目 : " << Book1.subject <<endl;
    cout << "第一本书 ID : " << Book1.book_id <<endl;

    // 输出 Book1 信息2
    printBook( Book1 );






    // Vector 是 C++ 标准库中的一个动态数组类，可以存储任意类型的元素，并且可以自动调整大小。
    // Vector 的作用是提供一个动态数组的实现，可以方便地存储和访问
    // 元素。Vector 可以自动调整大小，支持随机访问和迭代器操作。
    std::vector<int> vec = {1, 2, 3, 4, 5};
    cout << "\nVector elements: ";
    for (const auto& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;

    vector<int> vector_default_five(5);
    // auto elem 会"拷贝"容器中的每个元素
    // auto& elem 会"引用"容器中的每个元素
    // 对于 int 这种小型数据影响不大，但对大型对象如 std::string 或自定义类会显著降低性能
    cout << "Default vector of size 5: ";
    for (const auto& elem : vector_default_five) { // const 确保循环内不会意外修改元素（明确表达“只读”意图）
        cout << elem << " ";
    }
    cout << endl;

    // 使用 vector 的默认值初始化
    // 这里创建一个大小为 5 的 vector，所有元素都初始化为 10
    vector<int> vector_default_five_10(5, 10);

    vector_default_five_10.push_back(20); // 添加一个元素 20

    int x_first = vector_default_five_10[0]; // 访问第一个元素
    int y_first = vector_default_five_10.at(0); // 使用 at() 方法访问第一个元素
    cout << "Element: " << x_first << y_first << endl;

    cout << "Default vector of size 5 for 10s: ";
    for (const auto& elem : vector_default_five_10) {
        cout << elem << " ";
    }
    cout << endl;


    int int_size = vector_default_five_10.size(); // 获取 vector 的大小
    cout << "Size of vector_default_five_10: " << int_size << endl;

    // 迭代访问-范围循环(底层仍是迭代器) 拷贝 复制内存可修改
    for (int element : vector_default_five_10) {
        cout << "Element: " << element << endl;
    };

    // 迭代访问-迭代器遍历
    // 迭代器是 C++ 标准库中用于遍历容器的对象，可以像指针一样使用。
    // 迭代器可以用于访问容器中的元素，并且可以进行插入、删除等操作。
    // 迭代器的作用是提供一种统一的方式来遍历容器中的元素。
    // myVector.begin()：返回指向容器第一个元素的迭代器（类似于指针）。
    for (auto it = vector_default_five_10.begin(); it != vector_default_five_10.end(); ++it) {
        cout << "Element: " << *it << endl; // 使用 *it 解引用迭代器获取元素值
    }

    // vector_default_five_10.begin(); // 获取指向第一个元素的迭代器
    // vector_default_five_10.end(); // 获取指向最后一个元素之后的迭代器
    cout << "vector_default_five_10's size: " << vector_default_five_10.size() << endl; // 获取 vector 的大小
    cout << "vector_default_five_10's capacity: " << vector_default_five_10.capacity() << endl; // 获取 vector 的容量

    // vector_default_five_10.front(); // 获取第一个元素
    // vector_default_five_10.back(); // 获取最后一个元素
    cout << "vector_default_five_10's front: " << vector_default_five_10.front() << endl; // 获取第一个元素 的值
    cout << "vector_default_five_10's begin: " << *vector_default_five_10.begin() << endl; // 获取第一个元素 通过解引用迭代器获得值
    // 迭代器的本质
    // 迭代器通常是指针的包装，直接指向容器中的元素。
    // 迭代器可以通过解引用操作符（*）来访问元素的值。
    // 迭代器可以通过自增（++）或自减（--）操作符来移动到下一个或上一个元素。
    // 避免手动计算偏移量（如 ptr + i），减少指针越界错误 // 也可以用at 但性能略低于直接访问如vec[i]（因边界检查）

    // 指针算术：最快，但高风险（适合性能关键且已严格验证的场景）。
    // 迭代器/安全方法：稍慢（因可能的边界检查），但99%的场景足够高效。
    // 在现代C++中，除非是底层代码（如自定义数据结构或高频交易系统），否则永远不需要手动计算指针偏移。迭代器和标准库已为你安全且高效地处理了边界问题。


    vector_default_five_10.erase(vector_default_five_10.begin() + 1); // 删除第二个元素

    vector_default_five_10.clear(); // 清空 vector 保留容量capacity 避免重复分配内存
    vector_default_five_10 = vector<int>(); // 立即释放内存减少占用 保证确定性状态如确保迭代器完全失效


    






    return 0;
}

void printBook( struct Books book )
{
   cout << "\n书标题 : " << book.title <<endl;
   cout << "书作者 : " << book.author <<endl;
   cout << "书类目 : " << book.subject <<endl;
   cout << "书 ID : " << book.book_id <<endl;
}


int max(int num1, int num2) 
{
   // 局部变量声明
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
