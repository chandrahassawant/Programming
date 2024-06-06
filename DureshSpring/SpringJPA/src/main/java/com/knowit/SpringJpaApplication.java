package com.knowit;

import java.util.List;
import java.util.Optional;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.ApplicationContext;

import com.knowit.entities.User;

@SpringBootApplication
public class SpringJpaApplication {

	public static void main(String[] args) {
		ApplicationContext context = SpringApplication.run(SpringJpaApplication.class, args);
		UserRepository userRepository = context.getBean(UserRepository.class);

		// create object of user
//	User user = new User();
//	user.setName("Candu");
//	user.setCity("Pune");
//	user.setStatus(" I am Java Programmer");
//	
//	User user2 = new User();
//	user2.setName("Diksha");
//	user2.setCity("Kudal");
//	user2.setStatus(" I am Python Programmer");
//	
//	User resultuser=userRepository.save(user2);
//	System.out.println("Saved User"+resultuser);

//		Optional<User> optional = userRepository.findById(2);
//		User user = optional.get();
//		user.setName("Janhvi");
//
//		userRepository.save(user);
//
//		System.out.println(user);
		
//		userRepository.deleteById(52);
		
		List<User> alluser=userRepository.getAllUser();
		
		alluser.forEach(e->{;
		System.out.println(e);
		}
		);
		

	}

}
