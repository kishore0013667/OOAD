
#ifndef MEDICINE_H
#define MEDICINE_H

#include <string>

/**
  * class medicine
  * 
  */

class medicine
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  medicine ();

  /**
   * Empty Destructor
   */
  virtual ~medicine ();

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
  void update ()
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

  void id;
  void name;
  void description;
  void price;
  void date_due;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id
   * @param new_var the new value of id
   */
  void setId (void new_var)   {
      id = new_var;
  }

  /**
   * Get the value of id
   * @return the value of id
   */
  void getId ()   {
    return id;
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
   * Set the value of description
   * @param new_var the new value of description
   */
  void setDescription (void new_var)   {
      description = new_var;
  }

  /**
   * Get the value of description
   * @return the value of description
   */
  void getDescription ()   {
    return description;
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
   * Set the value of date_due
   * @param new_var the new value of date_due
   */
  void setDate_due (void new_var)   {
      date_due = new_var;
  }

  /**
   * Get the value of date_due
   * @return the value of date_due
   */
  void getDate_due ()   {
    return date_due;
  }
private:


  void initAttributes () ;

};

#endif // MEDICINE_H
