
#ifndef INFORMATION_H
#define INFORMATION_H

#include <string>

/**
  * class information
  * 
  */

class information
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  information ();

  /**
   * Empty Destructor
   */
  virtual ~information ();

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
  void veiw_details ()
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

  void name;
  void reg_no;
  void age;
  void percentage;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


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
   * Set the value of reg_no
   * @param new_var the new value of reg_no
   */
  void setReg_no (void new_var)   {
      reg_no = new_var;
  }

  /**
   * Get the value of reg_no
   * @return the value of reg_no
   */
  void getReg_no ()   {
    return reg_no;
  }

  /**
   * Set the value of age
   * @param new_var the new value of age
   */
  void setAge (void new_var)   {
      age = new_var;
  }

  /**
   * Get the value of age
   * @return the value of age
   */
  void getAge ()   {
    return age;
  }

  /**
   * Set the value of percentage
   * @param new_var the new value of percentage
   */
  void setPercentage (void new_var)   {
      percentage = new_var;
  }

  /**
   * Get the value of percentage
   * @return the value of percentage
   */
  void getPercentage ()   {
    return percentage;
  }
private:


  void initAttributes () ;

};

#endif // INFORMATION_H
