#ifndef WARRANTY_H
#define WARRANTY_H
#include <iostream>
using namespace std;

class Warranty
{
    public:
        /** Default constructor */
        Warranty(istream& in);
        Warranty(); // constructor for new Warranty
        /** Default destructor */
        virtual ~Warranty();

        /** Access buydate
         * \return The current value of date
         */
        string GetBuydate() { return buydate; }
        /** Set buydate
         * \param val New value to set
         */
        void SetBuydate(string val) { buydate = val; }
        /** Access end_date
         * \return The current value of date
         */
        string GetEnddate() { return end_date; }
        /** Set end_date
         * \param val New value to set
         */
        void SetEnddate(string val) { end_date = val; }
        /** Access terms
         * \return The current value of terms
         */
        string Getterms() { return terms; }
        /** Set terms
         * \param val New value to set
         */
        void Setterms(string val) { terms = val; }
        /** Access item
         * \return The current value of item
         */
        string Getitem() { return item; }
        /** Set item
         * \param val New value to set
         */
        void Setitem(string val) { item = val; }
        //get a summary of the Warranty
        string getSummary();
        void tofile(string filename);

    protected:

    private:
        string buydate; //when the item was bought
        string end_date; //expiration date
        string terms; //terms of the warranty
        string item; // what is the item?
};

#endif // WARRANTY_H
