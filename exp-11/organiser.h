
#ifndef ORGANISER_H
#define ORGANISER_H

#include <string>

/**
  * class organiser
  * 
  */

class organiser
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  organiser ();

  /**
   * Empty Destructor
   */
  virtual ~organiser ();

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
  void allocating_the_seats ()
  {
  }


  /**
   */
  void inviting_the_delegates ()
  {
  }


  /**
   */
  void choosing_the_winner ()
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

  void member_details;
  void functions_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of member_details
   * @param new_var the new value of member_details
   */
  void setMember_details (void new_var)   {
      member_details = new_var;
  }

  /**
   * Get the value of member_details
   * @return the value of member_details
   */
  void getMember_details ()   {
    return member_details;
  }

  /**
   * Set the value of functions_details
   * @param new_var the new value of functions_details
   */
  void setFunctions_details (void new_var)   {
      functions_details = new_var;
  }

  /**
   * Get the value of functions_details
   * @return the value of functions_details
   */
  void getFunctions_details ()   {
    return functions_details;
  }
private:


  void initAttributes () ;

};

#endif // ORGANISER_H
