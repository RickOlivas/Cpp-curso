#include <iostream>


template <typename T1, typename T2>
class Repository{	
	public:				
		virtual void add(T2 entity)=0;
		virtual void update(T2 entity)=0;
		virtual T2 get(T1 id) =0;
};

class Customer{

};

class CustomerRepository: public Repository<int,Customer>{	
	public:
	virtual void add(Customer entity){

	}
	virtual void update(Customer entity){
		
	};
	virtual Customer get(int id){
		return Customer();
	};

};
int main(){	
	CustomerRepository customerRepository;
	customerRepository.add(Customer());
	customerRepository.update(Customer());
	auto customer = customerRepository.get(1);
	return 0;
}