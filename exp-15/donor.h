
#ifndef DONOR_H
#define DONOR_H

#include <string>
#include vector



/**
  * class donor
  * 
  */

class donor
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  donor ();

  /**
   * Empty Destructor
   */
  virtual ~donor ();

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
  void add ()
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
  void status;
  void bloodtype;
  void donorcard;
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
   * Set the value of bloodtype
   * @param new_var the new value of bloodtype
   */
  void setBloodtype (void new_var)   {
      bloodtype = new_var;
  }

  /**
   * Get the value of bloodtype
   * @return the value of bloodtype
   */
  void getBloodtype ()   {
    return bloodtype;
  }

  /**
   * Set the value of donorcard
   * @param new_var the new value of donorcard
   */
  void setDonorcard (void new_var)   {
      donorcard = new_var;
  }

  /**
   * Get the value of donorcard
   * @return the value of donorcard
   */
  void getDonorcard ()   {
    return donorcard;
  }
private:


  void initAttributes () ;

};

#endif // DONOR_H
