
#ifndef BLOOD_TYPE_H
#define BLOOD_TYPE_H

#include <string>
#include vector



/**
  * class blood_type
  * 
  */

class blood_type
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  blood_type ();

  /**
   * Empty Destructor
   */
  virtual ~blood_type ();

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


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
  void blood_type;
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
   * Set the value of blood_type
   * @param new_var the new value of blood_type
   */
  void setBlood_type (void new_var)   {
      blood_type = new_var;
  }

  /**
   * Get the value of blood_type
   * @return the value of blood_type
   */
  void getBlood_type ()   {
    return blood_type;
  }
private:


  void initAttributes () ;

};

#endif // BLOOD_TYPE_H
