#include "UObject/GeneratedCppIncludes.h"
#include "Hello/MyClass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS  //禁用弃用警告
void EmptyLinkFunctionForGeneratedCodeMyClass() {}
// Cross Module References
// 跨模块引用
    //构造UMyClass对应的UClass对象，不注册
    HELLO_API UClass* Z_Construct_UClass_UMyClass_NoRegister();
    //构造UMyClass对应的UClass对象，注册
    HELLO_API UClass* Z_Construct_UClass_UMyClass();
    //引用CoreUObject里的函数，主要是为了得到UObject本身对应的UClass
    COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
    //构造Hello本身的UPackage对象，这个函数的实现在Hello.init.gen.cpp里
    UPackage* Z_Construct_UPackage__Script_Hello();
// End Cross Module References
    // 说是静态注册，但现在都是为空
    void UMyClass::StaticRegisterNativesUMyClass()
    {
    }
    FClassRegistrationInfo Z_Registration_Info_UClass_UMyClass; \
    UClass* UMyClass::GetPrivateStaticClass() \
    { \
        //大钊文章里所谓的第一个收集入口，主要收集一些自身的内部信息，比如内存对齐，大小，所在的包名，类名等
        //Inner这里理解为内部适合一些，与Outer外部相对
        if (!Z_Registration_Info_UClass_UMyClass.InnerSingleton) \
        { \
            /* this could be handled with templates, but we want it external to avoid code bloat */ \
            GetPrivateStaticClassBody( \
                //Package名字
                StaticPackage(), \
                //类名，+1去掉U、A、F前缀，如果接口过时，需要+11，去掉_Deprecated前缀
                (TCHAR*)TEXT("UMyClass") + 1 + ((StaticClassFlags & CLASS_Deprecated) ? 11 : 0), \
                Z_Registration_Info_UClass_UMyClass.InnerSingleton, \
                StaticRegisterNativesUMyClass, \
                sizeof(UMyClass), \
                alignof(UMyClass), \  //内存对齐
                (EClassFlags)UMyClass::StaticClassFlags, \
                UMyClass::StaticClassCastFlags(), \
                UMyClass::StaticConfigName(), \
                (UClass::ClassConstructorType)InternalConstructor<UMyClass>, \
                (UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<UMyClass>, \
                &UMyClass::AddReferencedObjects, \
                &UMyClass::Super::StaticClass, \
                &UMyClass::WithinClass::StaticClass \
            ); \
        } \
        return Z_Registration_Info_UClass_UMyClass.InnerSingleton; \
    }
    //构造UMyClass对应的UClass对象，不注册，直接就返回UClass对象
    UClass* Z_Construct_UClass_UMyClass_NoRegister()
    {
        return UMyClass::StaticClass();
    }

    /** 下面的代码都是为了注册 */
    //UMyClass的UClass对象构造器，里面全是静态成员，主要是注册使用
    struct Z_Construct_UClass_UMyClass_Statics
    {
        //依赖的单例
        static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
        //元数据对数组，<const char* NameUTF8, const char* ValueUTF8>
        static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
        //C++类的信息，FCppClassTypeInfoStatic结构体里面只有一个成员，用于描述是否是抽象类
        static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
        //用于构建UMyClass的UClass的类参数
        static const UECodeGen_Private::FClassParams ClassParams;
    };
    //静态成员，类内声明，类外实现
    //依赖的单例对象
    UObject* (*const Z_Construct_UClass_UMyClass_Statics::DependentSingletons[])() = {
        //获得UMyClass的UClass
        (UObject* (*)())Z_Construct_UClass_UObject,
        //获得UMyClass所在UPackage
        (UObject* (*)())Z_Construct_UPackage__Script_Hello,
    };
#if WITH_METADATA  //编辑器模式下开启
    //元数据对 参数
    const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyClass_Statics::Class_MetaDataParams[] = {
        { "Comment", "/**\n * \n */" },     //注释
        { "IncludePath", "MyClass.h" },     //包含路径
        { "ModuleRelativePath", "MyClass.h" },  //相对路径
    };
#endif
    //C++类的类型信息
    const FCppClassTypeInfoStatic Z_Construct_UClass_UMyClass_Statics::StaticCppClassTypeInfo = {
        TCppClassTypeTraits<UMyClass>::IsAbstract,  //是否是抽象类
    };
    //构造UClass对象的参数
    const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyClass_Statics::ClassParams = {
        &UMyClass::StaticClass,     //可以获取到UMyClass对象的函数
        nullptr,    //UClass配置名称，UTF8字符串
        &StaticCppClassTypeInfo,    //C++类信息，是否是抽象类
        DependentSingletons,    //依赖的单例的函数数组，实际上是UClass对象构造器和UPackage对象构造器
        nullptr,    //UClass里成员函数数组指针，有两个成员，一个是创建UFunction对象的函数指针，一个是函数名
        nullptr,    //UClass里成员属性数组指针，里面有属性名，同步通知函数名，属性标识(同步，蓝图读写等)，属性类型标识，属性对象标识(是否对外公开，是否有默认值)
        nullptr,    //接口数组指针，三个成员，接口的UClass类，偏移量，是否可以蓝图执行
        UE_ARRAY_COUNT(DependentSingletons),    //依赖的单例函数的个数
        0,  //成员函数的个数
        0,  //成员属性的个数
        0,  //继承的接口的个数
        0x001000A0u,    //类标识
        //元数据参数宏，里面判断是否是编辑器模式，如果在编辑器模式下就是两个参数；反之就不传递参数
        //第一个参数，元数据对数组指针；第二个参数，利用宏方法求出元数据对个数
        METADATA_PARAMS(Z_Construct_UClass_UMyClass_Statics::Class_MetaDataParams, 
            UE_ARRAY_COUNT(Z_Construct_UClass_UMyClass_Statics::Class_MetaDataParams))
    };
    UClass* Z_Construct_UClass_UMyClass()
    {
        if (!Z_Registration_Info_UClass_UMyClass.OuterSingleton)
        {
            //这里的代码已经移到了UObjectGlobals.cpp里的5052行，利用前面构造的参数列表进行构造注册UClass
            UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyClass.OuterSingleton, Z_Construct_UClass_UMyClass_Statics::ClassParams);
        }
        return Z_Registration_Info_UClass_UMyClass.OuterSingleton;
    }
    template<> HELLO_API UClass* StaticClass<UMyClass>()
    {
        return UMyClass::StaticClass();
    }
    //HotReload相关，先忽略
    UMyClass::UMyClass(FVTableHelper& Helper) : Super(Helper) {};
    //该UClass的注册编译信息
    struct Z_CompiledInDeferFile_FID_Hello_Source_Hello_MyClass_h_Statics
    {
        static const FClassRegisterCompiledInInfo ClassInfo[];
    };
    //上面注册编译信息的类内声明，类外实现
    const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Hello_Source_Hello_MyClass_h_Statics::ClassInfo[] = {
        { 
            Z_Construct_UClass_UMyClass, //归属的UClass类
            UMyClass::StaticClass,  //自身的UClass
            TEXT("UMyClass"),   //名称
            &Z_Registration_Info_UClass_UMyClass,   //注册信息
            CONSTRUCT_RELOAD_VERSION_INFO(  //重加载的版本信息
                FClassReloadVersionInfo, 
                sizeof(UMyClass), 
                585199990U
            ) 
        },
    };
    //用于执行对象信息注册的帮助进程类。 它盲目地转发对 RegisterCompiledInInfo 的调用，这里就是注册调用的接口
    static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Hello_Source_Hello_MyClass_h_2139993100(
        TEXT("/Script/Hello"),  //Package名
        Z_CompiledInDeferFile_FID_Hello_Source_Hello_MyClass_h_Statics::ClassInfo, //类信息
        UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Hello_Source_Hello_MyClass_h_Statics::ClassInfo),  //类信息数目
        nullptr, //结构体信息
        0,  //结构体信息数目
        nullptr, //枚举信息
        0   //枚举信息数目
    );
PRAGMA_ENABLE_DEPRECATION_WARNINGS  //启用弃用警告

//UECodeGen_Private空间下的ConstructUClass()函数
    void ConstructUClass(UClass*& OutClass, const FClassParams& Params)
    {
        //防止重复注册
        if (OutClass && (OutClass->ClassFlags & CLASS_Constructed))
        {
            return;
        }
        //遍历该UClss依赖的对象的构造函数，并执行这些函数
        for (UObject* (*const *SingletonFunc)() = Params.DependencySingletonFuncArray, *(*const *SingletonFuncEnd)() = SingletonFunc + Params.NumDependencySingletons; SingletonFunc != SingletonFuncEnd; ++SingletonFunc)
        {
            (*SingletonFunc)();
        }
        //UClass内没有注册的对象，这里就是UMyClass
        UClass* NewClass = Params.ClassNoRegisterFunc();
        OutClass = NewClass;
        //如果自身没有构造函数，直接return
        if (NewClass->ClassFlags & CLASS_Constructed)
        {
            return;
        }

        UObjectForceRegistration(NewClass);  //提取信息注册自身，这里就是UMyClass，强制注册

        UClass* SuperClass = NewClass->GetSuperClass();
        if (SuperClass)
        {
            NewClass->ClassFlags |= (SuperClass->ClassFlags & CLASS_Inherit);
        }

        NewClass->ClassFlags |= (EClassFlags)(Params.ClassFlags | CLASS_Constructed);
        // Make sure the reference token stream is empty since it will be reconstructed later on
        // This should not apply to intrinsic classes since they emit native references before AssembleReferenceTokenStream is called.
        // 确保引用标识流为空，因为它将在稍后重建
        // 这不应该适用于内部类，因为它们在调用 AssembleReferenceTokenStream 之前原生引用会被调用。
        // AssembleReferenceTokenStream 重定向引用标识流
        if ((NewClass->ClassFlags & CLASS_Intrinsic) != CLASS_Intrinsic)
        {
            check((NewClass->ClassFlags & CLASS_TokenStreamAssembled) != CLASS_TokenStreamAssembled);
            NewClass->ReferenceTokenStream.Empty();  //清空引用标识流
        }
        // 遍历函数数组，使用Functions->CreateFuncPtr()创建出UFunction对象并串成链表
        // 这个链表维护在UClass的Children字段
        // 调用AddFunctionToFunctionMap函数，将UFunction对象和函数名字添加到UClass里的FuncMap映射
        NewClass->CreateLinkAndAddChildFunctionsToMap(Params.FunctionLinkArray, Params.NumFunctions);
        // 构造成员属性，里面用一个400行的switch-case来判断类型
        ConstructFProperties(NewClass, Params.PropertyArray, Params.NumProperties);
        // UClass对象的配置名称，是一个FName
        if (Params.ClassConfigNameUTF8)
        {
            NewClass->ClassConfigName = FName(UTF8_TO_TCHAR(Params.ClassConfigNameUTF8));
        }

        // 设置原生的C++类的类型信息
        // CppClassInfo是FCppClassTypeInfoStatic类型，结构体里只有一个成员变量，用于设定这个类是不是抽象类
        NewClass->SetCppTypeInfoStatic(Params.CppClassInfo);

        // 接口相关
        if (int32 NumImplementedInterfaces = Params.NumImplementedInterfaces)
        {
            // 为接口重新分配空间
            NewClass->Interfaces.Reserve(NumImplementedInterfaces);
            // 第一个参数段初始化访问的元素，并且计算尾部元素；后面正常迭代
            for (const FImplementedInterfaceParams* ImplementedInterface = Params.ImplementedInterfaceArray, *ImplementedInterfaceEnd = ImplementedInterface + NumImplementedInterfaces; ImplementedInterface != ImplementedInterfaceEnd; ++ImplementedInterface)
            {
                // 转成函数指针
                UClass* (*ClassFunc)() = ImplementedInterface->ClassFunc;
                // 判断函数指针是否为空，不为空就调用函数
                UClass* InterfaceClass = ClassFunc ? ClassFunc() : nullptr;
                // 在UClass里插入接口信息，并且初始化接口信息，这些信息包括偏移和是否可以蓝图调用
                NewClass->Interfaces.Emplace(InterfaceClass, ImplementedInterface->Offset, ImplementedInterface->bImplementedByK2);
            }
        }

#if WITH_METADATA
        // 为UClass添加元数据，主要用于蓝图里显示
        AddMetaData(NewClass, Params.MetaDataArray, Params.NumMetaData);
#endif
        // “静态”链接，后续解释
        NewClass->StaticLink();
        // 这里主要是添加子父的UClass对象的关系
        NewClass->SetSparseClassDataStruct(NewClass->GetSparseClassDataArchetypeStruct());
    }