#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyClass.generated.h"

UCLASS()
class HELLO_API UMyClass : public UObject
{
#define FID_Hello_Source_Hello_MyClass_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyClass(); \
	friend struct Z_Construct_UClass_UMyClass_Statics; \
private: \
    UMClass& operator=(UMClass&&);   \
    UMClass& operator=(const UMClass&);   \
	NO_API static UClass* GetPrivateStaticClass(); \
public: \
	/** Bitwise union of #EClassFlags pertaining to this class.*/ \
    /** 与此类相关的 #EClassFlags 的按位并集 */ \
	enum {StaticClassFlags = CLASS_Intrinsic}; \
	/** Typedef for the base class ({{ typedef-type }}) */ \
    /** 基类的类型定义 */
	typedef UObject Super;\
	/** Typedef for {{ typedef-type }}. */ \
    /** 该类的类型定义，类似于this指针 */ \
	typedef UMClass ThisClass;\
	/** Returns a UClass object representing this class at runtime */ \
    /** 在运行时返回表示此类的 UClass 对象 */ \
	inline static UClass* StaticClass() \
	{ \
		return GetPrivateStaticClass(); \
	} \
	/** Returns the package this class belongs in */ \
    /** 返回此类所属的包 */ \
	inline static const TCHAR* StaticPackage() \
	{ \
		return TEXT("/Script/Hello"); \
	} \
	/** Returns the static cast flags for this class */ \
    /** 返回此类的静态强制转换标志 */ \
	inline static EClassCastFlags StaticClassCastFlags() \
	{ \
		return CASUMClass_None; \
	} \
	/** For internal use only; use StaticConstructObject() to create new objects. */ \
    /** 仅供内部使用；使用 StaticConstructObject() 创建新对象。 */ \
	inline void* operator new(const size_t InSize, EInternal InInternalOnly, UObject* InOuter = (UObject*)GetTransientPackage(), FName InName = NAME_None, EObjectFlags InSetFlags = RF_NoFlags) \
	{ \
		return StaticAllocateObject(StaticClass(), InOuter, InName, InSetFlags); \
	} \
	/** For internal use only; use StaticConstructObject() to create new objects. */ \
    /** 仅供内部使用；使用 StaticConstructObject() 创建新对象。 */ \
	inline void* operator new( const size_t InSize, EInternal* InMem ) \
	{ \
		return (void*)InMem; \
	} \
	/* Eliminate V1062 warning from PVS-Studio while keeping MSVC and Clang happy. */ \
    /** 消除 PVS-Studio 的 V1062 警告，同时让 MSVC 和 Clang 满意 */ \
	inline void operator delete(void* InMem) \
	{ \
		::operator delete(InMem); \
	}

    /** 存档相关 */ \
	friend FArchive &operator<<( FArchive& Ar, UMyClass*& Res ) \
	{ \
		return Ar << (UObject*&)Res; \
	} \
	friend void operator<<(FStructuredArchive::FSlot InSlot, UMyClass*& Res) \
	{ \
		InSlot << (UObject*&)Res; \
	}

    /** Standard constructor, called after all reflected properties have been initialized */ \
    /** 标准构造函数，在初始化所有反射属性后调用 */ \
	NO_API UMyClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
    /** 禁止C++的移动构造和拷贝构造 */
	NO_API UMyClass(UMyClass&&); \
	NO_API UMyClass(const UMyClass&); \
public: \
	/** DO NOT USE. This constructor is for internal usage only for hot-reload purposes. */ \
    /** 请勿使用。此构造函数仅供内部用于热重载目的。 */\
    /** 一个用于热重载的UClas对象的构造函数 */\
	NO_API UMyClass(FVTableHelper& Helper);
    /** 调用这个函数会构造出上面那个对象 */\
	static UObject* __VTableCtorCaller(FVTableHelper& Helper) \
	{ \
    	return new (EC_InternalUseOnlyConstructor, (UObject*)GetTransientPackage(), NAME_None, RF_NeedLoad | RF_ClassDefaultObject | RF_TagGarbageTemp) UMyClass(Helper); \
	}

    /** 声明定义了一个构造函数包装器 */
	static void __DefaultConstructor(const FObjectInitializer& X) { new((EInternal*)X.GetObj())UMyClass(X); }
};