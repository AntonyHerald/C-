# Usage of pointer in modern C++
# Raw pointer are nothing but classic pointers in C++ 
A pointer is a type of variable. It stores the address of an object in memory, and is used to access that object. A raw pointer is a pointer whose lifetime is not controlled by an encapsulating object, such as a smart pointer. A raw pointer can be assigned the address of another non-pointer variable, or it can be assigned a value of nullptr. A pointer that hasn't been assigned a value contains random data.
A pointer can also be dereferenced to retrieve the value of the object that it points at. The **_member access operator_** provides access to an object's members.

        In C++
        int* p = nullptr; // declare pointer and initialize it
                      // so that it doesn't store a random address
        int i = 5;
            p = &i;      // assign pointer to address of object
        int j = *p;      // dereference p to retrieve the value at its address
    
    
A pointer can point to a typed object or to void. When a program allocates an object on the heap in memory, it receives the address of that object in the form of a pointer. Such pointers are called owning pointers. An owning pointer (or a copy of it) must be used to explicitly free the heap-allocated object when it's no longer needed. Failure to free the memory results in a memory leak, and renders that memory location unavailable to any other program on the machine. Memory allocated using new must be freed by using delete (or delete[]). For more information, see new and delete operators.

## Smart Pointers – This is modern C++ (Refer C++ 11, 14, 17 and further)
_Smart Pointer_ – In modern C++ programming the STL include smart pointer, which help to ensure that the program is free from memory leak and resources leaks and exception-safe.
_Smart Pointer_ are defined in the std namespace in the <memory> header file. They are crucial to the **RAII or Resource Acquisition Is Initialization** programming idiom. The main goal of this idiom is to ensure that resource acquisition occurs at the same time that the object is initialized, so that all resources for the object are created and made ready in one line of code. In practical terms, the main principle of RAII is to give ownership of any heap-allocated resource—for example, dynamically-allocated memory or system object handles—to a stack-allocated object whose destructor contains the code to delete or free the resource and also any associated clean-up code.

#	unique_ptr
Allows exactly one owner of the underlying pointer. Use as the default choice for POCO unless you know for certain that you require a shared_ptr. Can be moved to a new owner, but not copied or shared. Replaces auto_ptr, which is deprecated. Compare to boost::scoped_ptr. unique_ptr is small and efficient; the size is one pointer and it supports rvalue references for fast insertion and retrieval from C++ Standard Library collections. Header file: <memory>. For more information, see How to: Create and Use unique_ptr Instances and unique_ptr Class.
A std::unique_ptr owns of the object it points to and no other smart pointers can point to it. When the std::unique_ptr goes out of scope, the object is deleted. This is useful when you are working with a temporary, dynamically-allocated resource that can get destroyed once out of scope.
    
        A std::unique_ptr is created like this:
        •	std::unique_ptr<int>    p1(new int);
        •	std::unique_ptr<int[]>  p2(new int[100]);
        •	std::unique_ptr<Object> p3(new Object("Bingos"));   
        
        It is also possible to construct std::unique_ptr with the help of the special function std::make_unique, like this:
        •	std::unique_ptr<int>    p1 = std::make_unique<int>();    
        •	std::unique_ptr<int[]>  p2 = std::make_unique<int[]>(100);
        •	std::unique_ptr<Object> p3 = std::make_unique<Object>("Bingos");

### Characteristic of unique_ptr
1.	main feature is unique_ptr is, it is destroyed when gone out of scope
2.	unique pointer is unique, it DOES NOT ALLOW to make copy of itself (prevention of pointer)
3.	It will allow to move unique pointer to another unique pointer (differences the old one)
4.	Basically copy_contructor does not work
5.	https://en.cppreference.com/w/cpp/memory/unique_ptr

#	shared_ptr
Reference-counted smart pointer. Use when you want to assign one raw pointer to multiple owners, for example, when you return a copy of a pointer from a container but want to keep the original. The raw pointer is not deleted until all shared_ptr owners have gone out of scope or have otherwise given up ownership. The size is two pointers; one for the object and one for the shared control block that contains the reference count. Header file: <memory>.

•	A std::shared_ptr owns the object it points to but, unlike std::unique_ptr, it allows for multiple references. A special internal counter is decreased each time a std::shared_ptr pointing to the same resource goes out of scope. **This technique is called reference counting**. When the very last one is destroyed the counter goes to zero and the data will be deallocated.
•	This type of smart pointer is useful when you want to share your dynamically-allocated data around, the same way you would do with raw pointers or references.
    
  
        A std::shared_ptr is constructed like this:
        •	std::shared_ptr<int>    p1(new int);
        •	std::shared_ptr<Object> p2(new Object("Bingos"));
    
    
        There is an alternate way to build a std::shared_ptr, powered by the special function std::make_shared:
        •	std::shared_ptr<int>    p1 = std::make_shared<int>();
        •	std::shared_ptr<Object> p2 = std::make_shared<Object>("Bingos");

### Characteristic of shared_ptr
1.	One of the main features of std::shared_ptr is the ability to track how many pointers refer to the same resource. You can get information on the number or references with the method use_count(). 
https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c
2.	Ownership of an object can be shared to another obj, (copy_constructor works here)
3.	https://en.cppreference.com/w/cpp/memory/shared_ptr

#	weak_ptr
Special-case smart pointer for use in conjunction with shared_ptr. A weak_ptr provides access to an object that is owned by one or more shared_ptr instances, but does not participate in reference counting. Use when you want to observe an object, but do not require it to remain alive. Required in some cases to break circular references between shared_ptr instances. Header file: <memory>. 
A std::weak_ptr is basically a std::shared_ptr that doesn't increase the reference count. It is defined as a smart pointer that holds a non-owning reference, or a weak reference, to an object that is managed by another std::shared_ptr.

•	This smart pointer is useful to solve some annoying problems that you can't fix with raw pointers. We will see how shortly.
    
        Create a std::weak_ptr out of a std::shared_ptr or another std::weak_ptr. 
        •	std::shared_ptr<int> p_shared = std::make_shared<int>(100);
        •	std::weak_ptr<int>   p_weak1(p_shared);
        •	std::weak_ptr<int>   p_weak2(p_weak1);

In the example above p_weak1 and p_weak2 point to the same dynamic data owned by p_shared, but the reference counter doesn't grow.
### Characteristic of weak_ptr
1.	weak_ptr is a smart pointer that holds a non-owning (“weak) reference of the object, meaning it does not own that object.
2.	Usefulness – to track the objects, holds temporary ownership of shared pointer
3.	weak_ptr count will always remain 1 (when referenced)
4.	life of weak_ptr is alive until shared_ptr is alive.
 
[Reference links]
- https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c
- https://en.cppreference.com/w/cpp/memory/shared_ptr
- https://rufflewind.com/2016-03-05/unique-ptr
