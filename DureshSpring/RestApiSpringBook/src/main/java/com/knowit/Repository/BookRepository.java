

package com.knowit.Repository;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.repository.CrudRepository;
import org.springframework.stereotype.Repository;

import com.knowit.Entities.Book;


public interface BookRepository extends CrudRepository<Book, Integer> {

    // Any additional custom methods can be declared here if needed
	public Book findfindById(int id);

}
