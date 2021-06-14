#pragma once



class Object{

	public:

		static int count;

		Object(){
			count++;
		}

		Object(const Object& obj){
			count++;
		}

};

