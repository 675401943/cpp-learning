// 定义了cin cout cerr clog 等输入输出流对象 
// 分别对应于标准输入流、标准输出流、非缓冲标准错误流和缓冲标准错误流。
#include <iostream> 

#include <vector>
#include <array> // 添加此行以支持 std::array
#include <stack> // 添加此行以支持 std::stack
#include <queue> // 添加此行以支持 std::queue
#include <deque> // 添加此行以支持 std::deque
#include <unordered_map> // 添加此行以支持 std::unordered_map


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


    // C++ 数据结构 数组、结构体、类，也有STL容器如vector、list、map和unordered_map等。

    // 1. 数组（Array）：C++ 中的数组是一个固定大小的连续内存块，可以存储相同类型的元素。
    // 数组的大小在编译时确定，不能动态调整。
    // 直接访问元素，时间复杂度为O（1）。
    // 访问速度快，内存紧凑
    // 大小固定无法动态调整
    int arr[5] = {1, 2, 3, 4, 5}; // 定义一个大小为 5 的整数数组
    cout << "Array elements: " << arr[0];

    // 2. 结构体（Struct）：C++ 中的结构体是一种用户定义的数据类型，可以包含多个不同类型的成员变量。
    // 结构体的大小在编译时确定，不能动态调整。
    // 结构体可以包含基本数据类型、其他结构体、类、联合体等。
    struct Person {
        string name;
        int age;
        
    };
    Person person_A = {"Alice", 30}; // 定义一个 Person 结构体变量
    cout << "\nPerson name: " << person_A.name << ", age: " << person_A.age << endl;

    // 3. 类（Class）：C++ 中的类是一种用户定义的数据类型，可以包含多个不同类型的成员变量、成员函数、构造函数和析构函数。
    // 类的大小在编译时确定，不能动态调整。
    // 类可以包含基本数据类型、其他类、结构体、联合体等。
    // 与struct不同，类默认成员是私有的（private），而结构体默认成员是公有的（public）。
    // 而且，类可以实现封装、继承和多态等面向对象的特性。
    class Class_Person {
        private:
            string name;
            int age;
        public:
            Class_Person(string n, int a) : name(n), age(a) {} // 构造函数
            void printInfo() const { // 成员函数
                cout << "Name: " << name << ", Age: " << age << endl;
            }
    };
    Class_Person person_B("Bob", 25); // 定义一个 Person 类对象
    person_B.printInfo(); // 调用成员函数打印信息

    // 4. 链表 Linked List：C++ 中的链表是一种动态数据结构，由一系列节点组成，每个节点包含数据和指向下一个节点的指针。
    // 链表的大小可以动态调整，支持插入和删除操作。
    // 链表线性查找的时间复杂度为O（n），因为需要遍历链表找到插入或删除位置。
    // 链表头部与尾部插入和删除时间复杂度O（1）
    // 动态大小，适合频繁插入和删除的场景。
    // 随机访问效率低，不如数组直接访问快。
    struct Node {
        int int_data;
        Node* next; // 指向下一个节点的指针
    };
    Node* ptr_head = nullptr; // 链表头指针
    Node* newNode = new Node{10, nullptr}; // 创建一个新节点
    ptr_head = newNode; // 将新节点设置为链表头
    cout << "Linked List head data: " << ptr_head->int_data << endl; //

    // 5. 栈 Stack：C++ 中的栈是一种后进先出（LIFO）的数据结构，支持在顶部插入和删除元素。
    // 栈的大小可以动态调整，支持插入和删除操作。
    // 栈的插入和删除操作时间复杂度为O（1），因为只需要操作顶部元素。
    // 栈可以使用 std::stack 容器实现。
    // 操作简单，效率高，适合用于函数调用、表达式求值等场景。
    // 只能在栈顶操作，访问其他元素需要弹出栈顶元素
    std::stack<int> stack_is_me; // 定义一个整数栈
    stack_is_me.push(1); // 入栈
    stack_is_me.push(2); // 入栈
    stack_is_me.push(3); // 入栈
    cout << "\nStack top element: " << stack_is_me.top() << endl; //
    stack_is_me.pop(); // 出栈
    cout << "Stack top element after pop: " << stack_is_me.top() << endl;

    // 6. 队列 Queue：C++ 中的队列是一种先进先出（FIFO）的数据结构，支持在尾部插入和在头部删除元素。
    // 队列的大小可以动态调整，支持插入和删除操作。
    // 队列的插入和删除操作时间复杂度为O（1），因为只需要操作头部和尾部元素。
    // 队列可以使用 std::queue 容器实现。
    // 适合按顺序处理数据的场景，如任务调度
    // 只能在队列尾部插入元素，在队列头部删除元素，无法随机访问元素
    std::queue<int> queue_is_me; // 定义一个整数队列
    queue_is_me.push(1); // 入队
    queue_is_me.push(2); // 入队
    queue_is_me.push(3); // 入队
    cout << "\nQueue front element: " << queue_is_me.front() << endl; //
    queue_is_me.pop(); // 出队
    cout << "Queue front element after pop: " << queue_is_me.front() << endl;
    

    // 7. 双端队列 Deque：C++ 中的双端队列是一种可以在两端插入和删除元素的数据结构。
    // 双端队列的大小可以动态调整，支持在两端插入和删除操作。
    // 双端队列的插入和删除操作时间复杂度为O（1），因为可以在两端操作元素。
    // 双端队列可以使用 std::deque 容器实现。
    // 灵活的双向操作
    // 空间占用较大，适合需要在两端频繁操作的场景。
    std::deque<int> deque_is_me; // 定义一个整数双端队列
    deque_is_me.push_back(1); // 在尾部插入
    deque_is_me.push_front(2); // 在头部插入
    deque_is_me.push_back(3); // 在尾部插入
    cout << "\nDeque front element: " << deque_is_me.front() << endl; //
    cout << "Deque back element: " << deque_is_me.back() << endl; //
    deque_is_me.pop_front(); // 在头部删除
    cout << "Deque front element after pop: " << deque_is_me.front() << endl; //
    deque_is_me.pop_back(); // 在尾部删除
    cout << "Deque back element after pop: " << deque_is_me.back() << endl;

    // 8. Hash 表（Hash Table）：C++ 中的哈希表是一种基于哈希函数的数据结构，可以快速查找、插入和删除元素。
    // 哈希表的大小可以动态调整，支持插入和删除操作。
    // 哈希表的查找、插入和删除操作平均时间复杂度为O（1），但在最坏情况下可能退化为O（n）。
    // 哈希表可以使用 std::unordered_map 容器实现。
    // C++中的unordered_map是一个基于哈希表的实现。
    // 不保证元素的顺序，哈希冲突时性能会下降。
    std::unordered_map<std::string, int> hash_map_is_me; // 定义一个整数到字符串的哈希表
    hash_map_is_me["one"] = 1; // 插入键值对
    hash_map_is_me["two"] = 2; // 插入键值对
    hash_map_is_me["three"] = 3; // 插入键值对
    cout << "\nHash Map element for 'two': " << hash_map_is_me["two"] << endl; // 查找键为 "two" 的元素
    
    hash_map_is_me.erase("two"); // 删除键为 "two" 的元素
    cout << "Hash Map element for 'two' after erase: ";
    if (hash_map_is_me.find("two") == hash_map_is_me.end()) {
        cout << "not found" << endl; // 查找键为 "two" 的元素，未找到
    } else {
        cout << hash_map_is_me["two"] << endl; // 查找键为 "two" 的元素，找到
    }


    // 9. 映射 Map：C++ 中的映射是一种有序的键值对容器，底层实现是红黑树。与底层是哈希的unordered_map不同，它保证建的顺序。
    // 查找、插入和删除的时间复杂度为O（logn），因为需要维护红黑树的平衡。
    // 元素有序，适合按顺序处理数据的场景
    // 操作效率比unordered_map略低
    map<string, int> map_is_me; // 定义一个整数到字符串的映射
    map_is_me["apple"] = 10; // 双引号是string类型
    cout << "\nMap element for 'apple': " << map_is_me["apple"] << endl; // 查找键为 "apple" 的元素

    // 10. 集合 Set：C++ 中的集合是一种有序的唯一元素容器，底层实现是红黑树。与unordered_set不同，它保证建的顺序。
    // 查找、插入和删除的时间复杂度为O（logn），因为需要维护红黑树的平衡。
    // 自动排序和唯一性
    // 插入和删除的效率不如 unordered_set无序集合
    set<int> set_is_me; // 定义一个整数集合
    set_is_me.insert(1); // 插入元素
    set_is_me.insert(2); // 插入元素
    set_is_me.insert(3); // 插入元素
    cout << "\nSet elements: ";
    for (const auto& elem : set_is_me) {
        cout << elem << " "; // 输出集合中的元素
    }
    cout << endl;
    set_is_me.erase(2); // 删除元素 2
    cout << "\nSet elements after erase 2: ";
    for (const auto& elem : set_is_me) {
        cout << elem << " "; // 输出集合中的元素
    }
    cout << endl;

    // 解引用
    cout << "first element in *set_is_me: " << *set_is_me.begin() << endl; // 输出集合中的第一个元素

    // 11. Vector（动态数组）：C++ 中的向量是一种动态数组，可以存储任意类型的元素，并且可以自动调整大小，支持随机访问。
    // 支持随机访问，时间复杂度为O（1）。
    // 向量的插入和删除操作时间复杂度为O（n），因为需要移动元素。
    // 容量不足动态扩展时，时间复杂度为O（1）
    // 插入和删除中间元素的效率较低。
    vector<int> vector_is_me; 
    vector_is_me.push_back(1); // 在尾部插入元素
    vector_is_me.push_back(2); // 在尾部插入元素
    vector_is_me.push_back(3); // 在尾部插入元素
    cout << "\nVector elements: ";
    for (const auto& elem : vector_is_me) {
        cout << elem << " "; // 输出向量中的元素
    }
    cout << endl;



    // C++ 类&对象
    // C++ 中的类是面向对象编程的核心概念，用于封装数据和行为。类是C++的核心特性，通常被称为用户定义的类型。
    // 访问修饰符是private/public/protected，控制成员的访问权限。

    // 构造函数 类的构造函数是一种特殊的函数，在创建一个新对象时调用。
    // 析构函数 类的析构函数也是特殊函数，在删除所创建的对象时调用
    // 拷贝构造函数 拷贝构造函数是一个特殊的构造函数，用于通过另一个同类型对象来初始化新对象。
    // 友元函数 友元函数是一个特殊的函数，可以访问类的私有成员。友元函数不是类的成员，但可以访问类的私有成员。
    // 内联函数 内联函数是一个特殊的函数，编译器会将其代码直接插入到调用处，以提高性能。内联函数通常用于简单的函数。通过它，编译器试图在调用函数的地方扩展函数体中的代码。
    // this 指针 每一个对象都有一个特殊的this指针，指向当前对象的地址。this 指针可以在类的成员函数中使用，用于访问当前对象的成员变量和成员函数。
    // 指向类的指针 指向类的指针方式如同指向结构的指针。实际上，类可以看成是一个带有函数的结构。
    // 类的静态成员 类的数据成员和函数成员都可以被声明为静态的。

    // C++ 继承
    // 依据另一个类来定义一个类，达到重用代码功能和提高执行效率的目的，不需要重新编写新的数据成员和成员函数。

    // access-specifier是public protected private其中一个 如果未使用默认private
    class Class_Base
    {
        public: 
            void display() {
                cout << "Class_Base class display function." << endl;
            }
    };
    class Class_Derived : public Class_Base 
    { // 继承 Class_Base 类 
        public:
            void show() {
                cout << "Class_Derived class show function." << endl;
            }
    };

    // derived类可以访问base类的所有public和protected成员，但不能访问private成员。
    // 因此base类成员如果不想被derived类的成员函数访问，可以将其声明为private。

    // 访问         public  protected  private
    // 同一个类      yes     yes         yes 
    // base         yes     yes         no
    // derived      yes     yes         no


    // 我们几乎不使用 protected 或 private 继承，通常使用 public 继承。当使用不同类型的继承时，遵循以下几个规则：

    // 公有继承（public）：  
            // 当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，
            // 基类的保护成员也是派生类的保护成员，基类的私有成员不能直接被派生类访问，但是可以通过调用基类的公有和保护成员来访问。

    // 保护继承（protected）：
            // 当一个类派生自保护基类时，基类的公有和保护成员将成为派生类的保护成员。

    // 私有继承（private）：
            // 当一个类派生自私有基类时，基类的公有和保护成员将成为派生类的私有成员。


    // 多继承 即一个子类可以有多个父类，它继承了多个父类的特性。

    class class_Shape
    {
        protected:
            int int_width;
            int int_height;
        public:
            void setWidth(int w) 
            {
                int_width = w;
            }
            void setHeight(int h) 
            {
                int_height = h;
            }
        
    };

    class class_PaintCost
    {
        public:
            int getCost(int area) 
            {
                return area * 70; // 假设每平方米的油漆成本为 70
            }
    };

    class class_Rectangle : public class_Shape, public class_PaintCost 
    {
        public:
            int getArea() 
            {
                return int_width * int_height; // 计算矩形面积
            }
    };


    class_Rectangle Rect;
    int area;
 
    Rect.setWidth(5);
    Rect.setHeight(7);
 
    area = Rect.getArea();
   
    // 输出对象的面积
    cout << "Total area: " << Rect.getArea() << endl;
 
    // 输出总花费
    cout << "Total paint cost: $" << Rect.getCost(area) << endl;


    // C++ 中的函数重载
    class class_OverloadPrint
    {
        public:
            // 函数重载：根据参数类型或数量的不同，定义多个同名函数。
            void print(int a) 
            {
                cout << "Integer: " << a << endl; // 打印整数
            }
            void print(double b) 
            {
                cout << "Double: " << b << endl; // 打印浮点数
            }
            void print(string c) 
            {
                cout << "String: " << c << endl; // 打印字符串
            }
    };
    class_OverloadPrint overloadPrint;
    overloadPrint.print(5); // 调用打印整数函数
    overloadPrint.print(3.14); // 调用打印浮点数函数
    overloadPrint.print("Hello C++"); // 调用打印字符串函数

    // C++ 中的多态
    // 多态允许使用基类指针或引用来调用子类的重写方法，从而使得同一接口可以表现不同的行为。
    // 多态使得代码更加灵活和通用，程序可以通过基类指针或引用来操作不同类型的对象，而不需要显式区分对象类型。
    // 这样可以使代码更具扩展性，在增加新的形状类时不需要修改主程序。
    
    // 虚函数 Virtual Function
    // 在基类中声明一个函数为虚函数，使用关键字virtual。
    // 派生类可以重写（override）这个虚函数。
    // 调用虚函数时，会根据对象的实际类型来决定调用哪个版本的函数。
    // 虚函数允许子类重写它，从而在运行时通过基类指针或引用调用子类的重写版本，实现动态绑定。
    // 我们想要的是在程序中任意点可以根据所调用的对象类型来选择调用的函数，这种操作被称为动态链接，或后期绑定。

    class Animal 
    {
        public:
            virtual void sound() // 声明虚函数
            {
                cout << "Animal makes a sound." << endl; // 基类的实现
            }

            virtual ~Animal() = default; // 添加虚析构函数
    };
    class Dog : public Animal 
    {
        public:
            void sound() override // 重写虚函数
            {
                cout << "Dog barks." << endl; // 派生类的实现
            }

            ~Dog() override = default; // 可以显式地重写析构函数（可选）
    };
    Animal *animal = new Dog(); // 通过 Animal* 指针 animal 调用 sound() 时，程序会根据实际对象类型（Dog）来选择调用 Dog::sound()。
    animal->sound();  // 输出: Dog barks
    delete animal;

    // 纯虚函数 Pure Virtual Function
    // 一个包含纯虚函数的类被称为抽象类（Abstract Class），它不能被直接实例化。
    // 纯虚函数没有函数体，声明时使用= 0。
    // 它强制派生类提供具体的实现。定义接口。

    class Shape 
    {
        public:
            virtual int area() = 0;  // 纯虚函数，强制子类实现此方法

            virtual ~Shape() = default; // 添加虚析构函数
    };
 
    class Rectangle : public Shape 
    {
        private:
            int width, height;
        public:
            Rectangle(int w, int h) : width(w), height(h) { }
        
            int area() override {  // 实现纯虚函数
                return width * height;
            }

            ~Rectangle() override = default; // 可以显式地重写析构函数（可选）
    };

    Shape *shape = new Rectangle(10, 5);
    cout << "Rectangle Area: " << shape->area() << endl;  // 输出: Rectangle Area: 50
    delete shape;

    // 多态的实现机制
    // 虚函数表 V-Table: C++运行时使用虚函数表来实现多态。每个包含虚函数的类都有一个虚函数表，表中存储了指向类中所有虚函数的指针。
    // 虚函数表指针 V-Ptr: 每个对象都有一个指向其类的虚函数表的指针，称为虚函数表指针（V-Ptr）。当调用虚函数时，程序会通过 V-Ptr 查找正确的函数地址。

    // 使用多态的优势：
    // 代码复用：通过基类指针或引用，可以操作不同类型的派生类对象，实现代码的复用。
    // 扩展性：新增派生类时，不需要修改依赖于基类的代码，只需要确保新类正确重写了虚函数。
    // 解耦：多态允许程序设计更加模块化，降低类之间的耦合度。

    // 注意事项：
    // 只有通过基类的指针或引用调用虚函数时，才会发生多态。
    // 如果直接使用派生类的对象调用函数，那么调用的是派生类中的版本，而不是基类中的版本。
    // 多态性需要运行时类型信息（RTTI），这可能会增加程序的开销。

    // 数据封装
    class Adder
    {
        public:
            Adder(int i = 0) : total(i) {} // 构造函数，初始化 total
            // 对外的接口1
            void addNum(int number) 
            {
                total += number; // 添加数字到 total    
            }
            // 对外的接口2
            int getTotal() 
            {
                return total; // 返回 total 的值
            }

        private:
            // 对外隐藏的数据
            int total; // 私有成员变量，存储总和    

    };

    Adder a;
    a.addNum(10); // 调用 addNum 方法添加数字
    a.addNum(20); // 再添加一个数字 
    cout << "Total: " << a.getTotal() << endl; // 调用 getTotal 方法获取总和

    
    // C++ 接口 （抽象类）
    // C++ 中的接口通常是通过抽象类实现的。抽象类是包含至少一个纯虚函数的类。
    // 接口定义了一组方法，但不提供具体实现。派生类必须实现这些方法。
    // 接口可以用于定义一组相关的功能，允许不同的类实现这些功能。
    // 接口可以通过继承来实现，派生类必须实现所有的纯虚函数。
    class Interface_Shape
    {
        public:
            virtual int getArea() = 0; // 纯虚函数，定义接口
            virtual ~Interface_Shape() = default; // 添加虚析构函数

            void setWidth(int w) 
            {
                width = w; // 设置宽度
            }
            void setHeight(int h) 
            {
                height = h; // 设置高度
            }

        protected:
            int width; // 保护成员变量，派生类可以访问
            int height; // 保护成员变量，派生类可以访问
    };

    // 派生类实现接口
    class Rectangle_with_interface : public Interface_Shape
    {
        public:
            int getArea() 
            {
                return (width * height); // 计算矩形面积
            }
    };
    class Triangle_with_interface : public Interface_Shape
    {
        public:
            int getArea()  
            {
                return (0.5 * width * height); // 计算三角形面积
            }
    };

    Rectangle_with_interface rect;
    rect.setWidth(5); // 设置矩形宽度
    rect.setHeight(10); // 设置矩形高度
    cout << "Rectangle Area: " << rect.getArea() << endl; // 输出矩形面积

    Triangle_with_interface tri;
    tri.setWidth(5); // 设置三角形宽度 
    tri.setHeight(10); // 设置三角形高度
    cout << "Triangle Area: " << tri.getArea() << endl; // 输出三角形面积






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
