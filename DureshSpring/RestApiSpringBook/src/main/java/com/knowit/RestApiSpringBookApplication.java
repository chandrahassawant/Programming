package com.knowit;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

@SpringBootApplication(scanBasePackages={
"com.knowit.Controller", "com.knowit.Entites","com.knowit.Repository","com.knowit.Services"})
public class RestApiSpringBookApplication {

	public static void main(String[] args) {
		SpringApplication.run(RestApiSpringBookApplication.class, args);
	}

}