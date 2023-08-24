
#ifndef BOOK_H
#define BOOK_H

#include <string>
#include vector



/**
  * class book
  * 
  */

class book
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  book ();

  /**
   * Empty Destructor
   */
  virtual ~book ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void display_book ()
  {
  }


  /**
   */
  void update_status ()
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  void author;
  void name;
  void price;
  void address;
  void status;
  void edition;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of author
   * @param new_var the new value of author
   */
  void setAuthor (void new_var)   {
      author = new_var;
  }

  /**
   * Get the value of author
   * @return the value of author
   */
  void getAuthor ()   {
    return author;
  }

  /**
   * Set the value of name
   * @param new_var the new value of name
   */
  void setName (void new_var)   {
      name = new_var;
  }

  /**
   * Get the value of name
   * @return the value of name
   */
  void getName ()   {
    return name;
  }

  /**
   * Set the value of price
   * @param new_var the new value of price
   */
  void setPrice (void new_var)   {
      price = new_var;
  }

  /**
   * Get the value of price
   * @return the value of price
   */
  void getPrice ()   {
    return price;
  }

  /**
   * Set the value of address
   * @param new_var the new value of address
   */
  void setAddress (void new_var)   {
      address = new_var;
  }

  /**
   * Get the value of address
   * @return the value of address
   */
  void getAddress ()   {
    return address;
  }

  /**
   * Set the value of status
   * @param new_var the new value of status
   */
  void setStatus (void new_var)   {
      status = new_var;
  }

  /**
   * Get the value of status
   * @return the value of status
   */
  void getStatus ()   {
    return status;
  }

  /**
   * Set the value of edition
   * @param new_var the new value of edition
   */
  void setEdition (void new_var)   {
      edition = new_var;
  }

  /**
   * Get the value of edition
   * @return the value of edition
   */
  void getEdition ()   {
    return edition;
  }
private:


  void initAttributes () ;

};

#endif // BOOK_H
