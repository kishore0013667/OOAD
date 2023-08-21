
#ifndef STUDENTS_H
#define STUDENTS_H

#include <string>

/**
  * class students
  * 
  */

class students
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  students ();

  /**
   * Empty Destructor
   */
  virtual ~students ();

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
  void form_filling ()
  {
  }


  /**
   */
  void registration ()
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
  void address;
  void DOB;
  void Subjucts;
  void college;
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
   * Set the value of DOB
   * @param new_var the new value of DOB
   */
  void setDOB (void new_var)   {
      DOB = new_var;
  }

  /**
   * Get the value of DOB
   * @return the value of DOB
   */
  void getDOB ()   {
    return DOB;
  }

  /**
   * Set the value of Subjucts
   * @param new_var the new value of Subjucts
   */
  void setSubjucts (void new_var)   {
      Subjucts = new_var;
  }

  /**
   * Get the value of Subjucts
   * @return the value of Subjucts
   */
  void getSubjucts ()   {
    return Subjucts;
  }

  /**
   * Set the value of college
   * @param new_var the new value of college
   */
  void setCollege (void new_var)   {
      college = new_var;
  }

  /**
   * Get the value of college
   * @return the value of college
   */
  void getCollege ()   {
    return college;
  }
private:


  void initAttributes () ;

};

#endif // STUDENTS_H
