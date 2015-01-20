#ifndef YH_H
#define YH_H

template<typename T>
static inline T *qGetPtrHelper(T *ptr) {return ptr;} 

#define Q_DECLARE_PRIVATE(Class) \
	inline Class##PrivateData* d_func() {return reinterpret_cast<Class##PrivateData*>(qGetPtrHelper(d_ptr));} \
	inline const Class##PrivateData* d_func() const { return reinterpret_cast<Class##PrivateData*>(qGetPtrHelper(d_ptr));} \
	friend class Class##PrivateData;

#define Q_D(Class) Class##PrivateData * const d = d_func()

#define Q_DECLARE_PUBLIC(Class) \
	inline Class* q_func() {return reinterpret_cast<Class*>(qGetPtrHelper(q_ptr));} \
	inline const Class* q_func() const { return reinterpret_cast<Class*>(qGetPtrHelper(q_ptr));} \

#define Q_Q(Class) Class* const q = q_func()  

#endif