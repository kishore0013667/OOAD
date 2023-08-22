
#ifndef DONOR_CARD_H
#define DONOR_CARD_H

#include <string>
#include vector



/**
  * class donor_card
  * 
  */

class donor_card
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  donor_card ();

  /**
   * Empty Destructor
   */
  virtual ~donor_card ();

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
  void verification ()
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
  void owner_name;
  void donation_date;
  void details;
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
   * Set the value of owner_name
   * @param new_var the new value of owner_name
   */
  void setOwner_name (void new_var)   {
      owner_name = new_var;
  }

  /**
   * Get the value of owner_name
   * @return the value of owner_name
   */
  void getOwner_name ()   {
    return owner_name;
  }

  /**
   * Set the value of donation_date
   * @param new_var the new value of donation_date
   */
  void setDonation_date (void new_var)   {
      donation_date = new_var;
  }

  /**
   * Get the value of donation_date
   * @return the value of donation_date
   */
  void getDonation_date ()   {
    return donation_date;
  }

  /**
   * Set the value of details
   * @param new_var the new value of details
   */
  void setDetails (void new_var)   {
      details = new_var;
  }

  /**
   * Get the value of details
   * @return the value of details
   */
  void getDetails ()   {
    return details;
  }
private:


  void initAttributes () ;

};

#endif // DONOR_CARD_H
