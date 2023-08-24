
#ifndef APARTMENT_H
#define APARTMENT_H

#include <string>

/**
  * class apartment
  * 
  */

class apartment
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  apartment ();

  /**
   * Empty Destructor
   */
  virtual ~apartment ();

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
  void get_title ()
  {
  }


  /**
   */
  void get_picture ()
  {
  }


  /**
   */
  void get_ower_details ()
  {
  }


  /**
   */
  void get_description ()
  {
  }


  /**
   */
  void get_location ()
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

  void title;
  void picture;
  void owner_details;
  void discription;
  void location;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of title
   * @param new_var the new value of title
   */
  void setTitle (void new_var)   {
      title = new_var;
  }

  /**
   * Get the value of title
   * @return the value of title
   */
  void getTitle ()   {
    return title;
  }

  /**
   * Set the value of picture
   * @param new_var the new value of picture
   */
  void setPicture (void new_var)   {
      picture = new_var;
  }

  /**
   * Get the value of picture
   * @return the value of picture
   */
  void getPicture ()   {
    return picture;
  }

  /**
   * Set the value of owner_details
   * @param new_var the new value of owner_details
   */
  void setOwner_details (void new_var)   {
      owner_details = new_var;
  }

  /**
   * Get the value of owner_details
   * @return the value of owner_details
   */
  void getOwner_details ()   {
    return owner_details;
  }

  /**
   * Set the value of discription
   * @param new_var the new value of discription
   */
  void setDiscription (void new_var)   {
      discription = new_var;
  }

  /**
   * Get the value of discription
   * @return the value of discription
   */
  void getDiscription ()   {
    return discription;
  }

  /**
   * Set the value of location
   * @param new_var the new value of location
   */
  void setLocation (void new_var)   {
      location = new_var;
  }

  /**
   * Get the value of location
   * @return the value of location
   */
  void getLocation ()   {
    return location;
  }
private:


  void initAttributes () ;

};

#endif // APARTMENT_H
