
#ifndef RAILWAY_DATABASE_H
#define RAILWAY_DATABASE_H

#include <string>

/**
  * class railway_database
  * 
  */

class railway_database
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  railway_database ();

  /**
   * Empty Destructor
   */
  virtual ~railway_database ();

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
  void store_details ()
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

  void train_details;
  void passanger_details;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of train_details
   * @param new_var the new value of train_details
   */
  void setTrain_details (void new_var)   {
      train_details = new_var;
  }

  /**
   * Get the value of train_details
   * @return the value of train_details
   */
  void getTrain_details ()   {
    return train_details;
  }

  /**
   * Set the value of passanger_details
   * @param new_var the new value of passanger_details
   */
  void setPassanger_details (void new_var)   {
      passanger_details = new_var;
  }

  /**
   * Get the value of passanger_details
   * @return the value of passanger_details
   */
  void getPassanger_details ()   {
    return passanger_details;
  }
private:


  void initAttributes () ;

};

#endif // RAILWAY_DATABASE_H
