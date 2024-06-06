package com.knowit.Service;

import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;
import com.knowit.Entities.Book;
import com.knowit.Repository.BookRepository;

@Component
public class BookService {
	@Autowired
	private BookRepository bookRepository;



	// get all books
	public List<Book> getAllBooks() {
		List<Book> list =(List<Book>)this.bookRepository.findAll();
		return list;
	}


	// get particular book
	 public Optional<Book> getBookById(int id) {
	        Optional<Book> book = null;
	        try {
	            // book = list.stream().filter(e -> e.getId() == id).findFirst().get();
	            book=this.bookRepository.findById(id);
	        } catch (Exception e) {
	            e.printStackTrace();
	        }
	        return book;
	    }


	// adding the book
	public Book addBook(Book b) {
		Book result = bookRepository.save(b);
		return result;

	}

	// delete a book
	public void deleteBook(int id) {
//	    Book bookToRemove = null;
//	    for (Book book : list) {
//	        if (book.getId() == id) {
//	            bookToRemove = book;
//	            break; // Found the book, no need to continue iterating
//	        }
//	    }
//	    if (bookToRemove != null) {
//	        list.remove(bookToRemove);
//	    }
		bookRepository.deleteById(id);

	}

	// Update book details
	public Book updateBook(Book updatedBook, int id) {
//	    for (Book book : list) {
//	        if (book.getId() == id) {
//	            // Update the details of the book
//	            book.setName(updatedBook.getName());
//	            book.setPrice(updatedBook.getPrice());
//	            book.setStatus(updatedBook.isStatus());
//	            return book; // Return the updated book
//	        }
//	    }
//	    // If the book with the specified ID is not found, return null or throw an exception
//	    return null; // Or throw an exception indicating book not found

		updatedBook.setId(id);
		return bookRepository.save(updatedBook);
	}

}
