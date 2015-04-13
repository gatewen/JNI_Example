#pragma once

template <class T>
class Singleton
{
public:
	static T* _instance;
	
	static T* GetInstance()
	{
		if(!_instance)
		{
			_instance = new T();
			//CCASSERT(_instance, "FATAL: Not enough memory");	
			if(_instance->init())
			{
				return _instance;
			}
			else
			{
				//log("init return false  error in Singleton_h");
				return nullptr;
			}
		}
		return _instance;
	}
	virtual bool init(){return true;}
};
template <class T>
T* Singleton<T>::_instance = nullptr;


