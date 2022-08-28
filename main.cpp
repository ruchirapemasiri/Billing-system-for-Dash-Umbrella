#include <iostream>
#include<string>
#include<stdlib.h>
#include<fstream>

using namespace std;

void login()
{
    string user_name;
   string password;
   bool loginsuccess=false;
   cout<<"                                                                            *************************" <<endl;
   cout<<"                                                                            *                       *"<<endl;
   cout<<"                                                                            *    DASH INDUSTRIES    *" <<endl;
   cout<<"                                                                            *                       *"<<endl;
   cout<<"                                                                            *************************" <<endl;
   cout<<"                                                                                 AS ONE FAMILLY.      "<<endl;
   cout<<"                                                                                  www.dash.com       "<<endl;

   do
   {
       cout<<"\n\n~Enter user name: ";
       cin>>user_name;
       cout<<"Enter password: ";
       cin>>password;

       if(user_name=="DASH"&& password=="1995")
       {
           cout<<"\nLOGING SUCCESSFULL....\n\n";
           loginsuccess=true;

       }
       else
       {
           cout<<"please try agian\n";

       }

   }
   while(!loginsuccess);
}


void raw_materials_details()
{

    cout<<"-------------------------------------------------------------------------------------------------------------------------------------------------------------------------|"<<endl;
   cout<<"|umbrella code |umbrella category |cost per cover from company|cost per frame from company|cost per thread from company|payment per completed good to worker|market price|"<<endl;
   cout<<"|              |                  |                           |                           |                            |       (without damage)             |            |"<<endl;
   cout<<"---------------|------------------|---------------------------|---------------------------|----------------------------|------------------------------------|------------|"<<endl;
   cout<<"               |                  |                           |                           |                            |                                    |            |"<<endl;
   cout<<"|ub1212        | BABY UMBRELLA    |RS:50.00                   |RS:50.00                   |RS:30.00                    |RS:50.00                            |RS:300.00   |"<<endl;
   cout<<"|--------------|------------------|---------------------------|---------------------------|----------------------------|------------------------------------|------------|"<<endl;
   cout<<"|lu1313        | LADIES UMBRELLA  |RS:100.00                  |RS:100.00                  |RS:60.00                    |RS:100.00                           |RS:600.00   |"<<endl;
   cout<<"|--------------|------------------|---------------------------|---------------------------|----------------------------|------------------------------------|------------|"<<endl;
   cout<<"|gu1617        | GENTS UMBRELLA   |RS:125.00                  |RS:125.00                  |RS:75.00                    |RS:125.00                           |RS:800.00   |"<<endl;
   cout<<"|--------------|------------------|---------------------------|---------------------------|----------------------------|------------------------------------|------------|"<<endl;

   cout<<"\n\n"<<endl;
   cout<<"\n BONUS is only for cluster head outside workers"<<endl;
   cout<<"-----------------------------------------------------------------------------|"<<endl;
   cout<<"|umbrella code|umbrella category|bonus for one completed good(without damage)|"<<endl;
   cout<<"|-------------|-----------------|--------------------------------------------|"<<endl;
   cout<<"|bu1212       |BABY UMBRELLA    |RS:5.00                                     |"<<endl;
   cout<<"|-------------|-----------------|--------------------------------------------|"<<endl;
   cout<<"|lu1313       |LADIES UMBRELLA  |RS:7.00                                     |"<<endl;
   cout<<"|-------------|-----------------|--------------------------------------------|"<<endl;
   cout<<"|Gu1617       |GENTS UMBRELLA   |RS:5.00                                     |"<<endl;
   cout<<"|----------------------------------------------------------------------------|"<<endl;
   cout<<"\n\n"<<endl;

}

void read_assumptions()
{
   cout<<"\n\n"<<endl;
   cout<<"---------------------------------------------------------------------------"<<endl;
   cout<<"|                                                                          |"<<endl;
   cout<<"|An assumption-->Only one thread will be provided for sewing one umbrella. |"<<endl;
   cout<<"|                                                                          |"<<endl;
   cout<<"----------------------------------------------------------------------------"<<endl;

    cout<<"\n\n"<<endl;
   cout<<"----------------------------------------------------------------------------------------|"<<endl;
   cout<<"|                                                                                       |"<<endl;
   cout<<"|An assumption-->The company is of the opinion that the goods(umbrella) should be given |"<<endl;
   cout<<"|                in proportion to the raw materials provided.                           |"<<endl;
   cout<<"|                As an example:                                                         |"<<endl;
   cout<<"|                Company will be providing same equal quantity of raw materials such as,|"<<endl;
   cout<<"|                10 frames, 10 pieces of covers and 10 wheels of threads.as a result of |"<<endl;
   cout<<"|                those raw materials the company expect  number of 10 umbrellas from the|"<<endl;
   cout<<"|                out side worker.                                                       |"<<endl;
   cout<<"|                                                                                       |"<<endl;
   cout<<"----------------------------------------------------------------------------------------| "<<endl;

   cout<<"\n\n"<<endl;
   cout<<"* out side worker can get raw materials from company for only maximum 100 umbrellas per month. "<<endl;
   cout<<"* cluster head outside worker can get raw materials from company for only maximum 3000 umbrellas per month. "<<endl;
}

void select_raw_materials_details()
{
    char c;

    cout<<"Do you need to display company raw materials details chart(y/n): "<<endl;
    cin>>c;

    if(c=='y')
    {
        raw_materials_details();
    }
    else
    {
        cout<<""<<endl;
    }
}
class workers
{   protected:
   string name,id,month,umbrella_code;
   float cost_for_rawmaterials,payment_for_this_outside_worker,profit_precentage_from_this_outsourse_worker,total_cost_for_this_outside_order;

        float reject_precentage_of_this_outsideworker,market_value_of_this_outside_order,profit_amount_from_this_outside_order;

        float bonus_for_cluster_head_worker,bonus_for_bu1212,bonus_for_lu1313,bonus_for_gu1617;

        float lost_amount_from_working_capital;



        int valueble_goods;
  public:
   workers()
   {
       cout<<"\n\t                                                         WELLCOME TO OUR PREFORMANCE EVALUATION SYSTEM "<<endl;
       cout<<"                                                             ````````````````````````````````````````````````````\n\t"<<endl;


   }

   void input()
   {


   cout<<"Enter Worker Name :";
   cin>>name;


   cout<<"\nEnter Worker Id   :";
   cin>>id;

   cout<<"\nEnter Month       :";
   cin>>month;
   cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    //system("CLS");
   }




   virtual void calculation_and_display()=0;//pure virtual function

   void display()
   {



   if(market_value_of_this_outside_order>total_cost_for_this_outside_order)

    {

      cout<<"\nWORKER NAME  ::"<<name<<endl;
      cout<<"\nWORKER ID    ::"<<id<<endl;
      cout<<"\nMONTH        ::"<<month<<endl;



     cout<<"\nprofit precentage is::"<<profit_precentage_from_this_outsourse_worker;
     cout<<"%"<<endl;
     cout<<"\nreject precentage is ::"<<reject_precentage_of_this_outsideworker;
     cout<<"%"<<endl;
    }

   else
   {
    cout<<"\nWORKER NAME  ::"<<name<<endl;
    cout<<"\nWORKER ID    ::"<<id<<endl;
    cout<<"\nMONTH        ::"<<month<<endl;

    cout<<"\nreject precentage is ::"<<reject_precentage_of_this_outsideworker;
    cout<<"%"<<endl;

    cout<<"\ntotal lost amount of working capital from this out sider RS: "<<lost_amount_from_working_capital<<endl;


   }



   }
   ~workers()
   {

   }

};


class out_side_worker:public workers
{
public:
    int covers_amount,frames_amount,threads_amount,expected_umbrellas,rejected_umbrellas;

    void input_rawmaterials_and_outsourse_order_details()
    {



        cout<<"\nenter the umbrella code :";
        cin>>umbrella_code;
        cout<<"enter the cover amount  :";
        cin>>covers_amount;
        cout<<"enter the frame amount  :";
        cin>>frames_amount;
        cout<<"enter the threads amount:";
        cin>>threads_amount;
        cout<<"expected umbrellas from this outside worker:";
        cin>>expected_umbrellas;
        cout<<"rejected umbrellas amount from this outside worker:";
        cin>>rejected_umbrellas;
    }



    void calculation_and_display()
    {
          ofstream outf("performance evaluation sheet for out_side_worker.txt");

        if(umbrella_code=="bu1212")
        {   reject_precentage_of_this_outsideworker=(rejected_umbrellas*100)/expected_umbrellas;

            cost_for_rawmaterials=(covers_amount*50)+(frames_amount*50)+(threads_amount*30);

            valueble_goods=expected_umbrellas-rejected_umbrellas;

            payment_for_this_outside_worker=(valueble_goods)*50;

            total_cost_for_this_outside_order=cost_for_rawmaterials+payment_for_this_outside_worker;

            market_value_of_this_outside_order=valueble_goods*300; //market price of bu1212=300

            profit_amount_from_this_outside_order= market_value_of_this_outside_order-total_cost_for_this_outside_order;

            lost_amount_from_working_capital=(total_cost_for_this_outside_order-market_value_of_this_outside_order);




            if(market_value_of_this_outside_order>total_cost_for_this_outside_order)
            {
                profit_precentage_from_this_outsourse_worker=(profit_amount_from_this_outside_order/total_cost_for_this_outside_order)*100;


                if(profit_precentage_from_this_outsourse_worker>=25 && reject_precentage_of_this_outsideworker<=30)
                {
                    display();
                    cout<<"\nPREFORMANCE EVALUATION STATUS = !!! GOOD!!!"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATUS = !!! GOOD!!!";
                }
                else
                {   display();
                    cout<<"\nPREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                }
            }
            else
            {


                display();

                cout<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                cout<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"total lost amount of working capital from this out sider RS: "<<lost_amount_from_working_capital<<endl;
                    outf<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                    outf<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;

            }
        }

        else if(umbrella_code=="lu1313")
             {
            reject_precentage_of_this_outsideworker=(rejected_umbrellas*100)/expected_umbrellas;

            cost_for_rawmaterials=(covers_amount*100)+(frames_amount*100)+(threads_amount*60);

            valueble_goods=expected_umbrellas-rejected_umbrellas;

            payment_for_this_outside_worker=(valueble_goods)*100;

            total_cost_for_this_outside_order=cost_for_rawmaterials+payment_for_this_outside_worker;

            market_value_of_this_outside_order=valueble_goods*600; //market price of lu1313=RS 800

            profit_amount_from_this_outside_order= market_value_of_this_outside_order-total_cost_for_this_outside_order;

            lost_amount_from_working_capital=(total_cost_for_this_outside_order-market_value_of_this_outside_order);



            if(market_value_of_this_outside_order>total_cost_for_this_outside_order)
            {
                profit_precentage_from_this_outsourse_worker=(profit_amount_from_this_outside_order/total_cost_for_this_outside_order)*100;



                if(profit_precentage_from_this_outsourse_worker>=25 && reject_precentage_of_this_outsideworker<=30)
                {
                    display();
                    cout<<"\nPREFORMANCE EVALUATION STATUS=!!! GOOD!!!"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATUS = !!! GOOD!!!";
                }
                else
                {   display();
                    cout<<"\nPREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                }
                }

            else
            {   display();
                cout<<"\n             !!!!!! WARNING !!!!!!!!"<<endl;
                cout<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"total lost amount of working capital from this out sider RS: "<<lost_amount_from_working_capital<<endl;
                    outf<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                    outf<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
            }
        }
        else if(umbrella_code=="gu1617")

            {
            reject_precentage_of_this_outsideworker=(rejected_umbrellas*100)/expected_umbrellas;

            cost_for_rawmaterials=(covers_amount*125)+(frames_amount*125)+(threads_amount*75);

            valueble_goods=expected_umbrellas-rejected_umbrellas;

            payment_for_this_outside_worker=(valueble_goods)*125;

            total_cost_for_this_outside_order=cost_for_rawmaterials+payment_for_this_outside_worker;

            market_value_of_this_outside_order=valueble_goods*800; //market price of lu1313=RS 800

            profit_amount_from_this_outside_order= market_value_of_this_outside_order-total_cost_for_this_outside_order;

            lost_amount_from_working_capital=(total_cost_for_this_outside_order-market_value_of_this_outside_order);



            if(market_value_of_this_outside_order>total_cost_for_this_outside_order)
            {
                profit_precentage_from_this_outsourse_worker=(profit_amount_from_this_outside_order/total_cost_for_this_outside_order)*100;


                if(profit_precentage_from_this_outsourse_worker>=35.75 && reject_precentage_of_this_outsideworker<=30)
                {   display();
                    cout<<"\nPREFORMANCE EVALUATION STATUS=!!! GOOD PREFORMANCE!!!"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATUS = !!! GOOD!!!";
                }
                else
                {
                    display();
                   cout<<"\nPREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                }
            }
            else
            {   display();
                cout<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                cout<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"total lost amount of working capital from this out sider RS: "<<lost_amount_from_working_capital<<endl;
                    outf<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                    outf<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
            }
        }


        else
        {
            cout<<"\n INVALID UMBRELLA CODE CHECK AGAIN!!!"<<endl;
        }

outf.close();

    }




};
class cluster_head_worker:public workers
{
public:
    int covers_amount,frames_amount,threads_amount,expected_umbrellas,rejected_umbrellas;

    void input_rawmaterials_and_outsourse_order_details()
    {
        cout<<"\nenter the umbrella code :";
        cin>>umbrella_code;
        cout<<"enter the cover amount  :";
        cin>>covers_amount;
        cout<<"enter the frame amount  :";
        cin>>frames_amount;
        cout<<"enter the threads amount:";
        cin>>threads_amount;
        cout<<"expected umbrellas from this outside worker:";
        cin>>expected_umbrellas;
        cout<<"rejected umbrellas amount from this outside worker:";
        cin>>rejected_umbrellas;
    }

 void setbonus(float x,float y,float z)
 {
    bonus_for_bu1212=x;
    bonus_for_lu1313=y;
    bonus_for_gu1617=z;
 }


    void calculation_and_display()
    {
 ofstream outf("performance evaluation sheet for cluster_head_outside_worker.txt");

        if(umbrella_code=="bu1212")
        {   reject_precentage_of_this_outsideworker=(rejected_umbrellas*100)/expected_umbrellas;

            cost_for_rawmaterials=(covers_amount*50)+(frames_amount*50)+(threads_amount*30);

            valueble_goods=expected_umbrellas-rejected_umbrellas;

            bonus_for_cluster_head_worker=valueble_goods*bonus_for_bu1212;//BONUS AMOUNT ONLY FOR CLUSTER_HEAD OUTSIDE WORKERS

            payment_for_this_outside_worker=(valueble_goods)*50;

            total_cost_for_this_outside_order=cost_for_rawmaterials+payment_for_this_outside_worker;

            market_value_of_this_outside_order=valueble_goods*300; //market price of bu1212=300

            profit_amount_from_this_outside_order= market_value_of_this_outside_order-total_cost_for_this_outside_order;

            lost_amount_from_working_capital=(total_cost_for_this_outside_order-market_value_of_this_outside_order);



            if(market_value_of_this_outside_order>total_cost_for_this_outside_order)
            {
                profit_precentage_from_this_outsourse_worker=(profit_amount_from_this_outside_order/total_cost_for_this_outside_order)*100;


                if(profit_precentage_from_this_outsourse_worker>=41.1 && reject_precentage_of_this_outsideworker<=30)
                {
                    display();
                    cout<<"\nPREFORMANCE EVALUATION STATUS = !!! GOOD!!!"<<endl;
                    cout<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATUS = !!! GOOD!!!";
                    outf<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                }
                else
                {   display();
                    cout<<"\nPREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                     cout<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                    outf<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                }
            }
            else
            {    display();
                cout<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                cout<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                    outf<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"total lost amount of working capital from this out sider RS: "<<lost_amount_from_working_capital<<endl;
            }
        }

        else if(umbrella_code=="lu1313")
             {
            reject_precentage_of_this_outsideworker=(rejected_umbrellas*100)/expected_umbrellas;

            cost_for_rawmaterials=(covers_amount*100)+(frames_amount*100)+(threads_amount*60);

            valueble_goods=expected_umbrellas-rejected_umbrellas;

            payment_for_this_outside_worker=(valueble_goods)*100;

            total_cost_for_this_outside_order=cost_for_rawmaterials+payment_for_this_outside_worker;

            market_value_of_this_outside_order=valueble_goods*600; //market price of lu1313=RS 800

            profit_amount_from_this_outside_order= market_value_of_this_outside_order-total_cost_for_this_outside_order;

            bonus_for_cluster_head_worker=valueble_goods*bonus_for_lu1313;

            lost_amount_from_working_capital=(total_cost_for_this_outside_order-market_value_of_this_outside_order);


            if(market_value_of_this_outside_order>total_cost_for_this_outside_order)
            {
                profit_precentage_from_this_outsourse_worker=(profit_amount_from_this_outside_order/total_cost_for_this_outside_order)*100;



                if(profit_precentage_from_this_outsourse_worker>=41.1 && reject_precentage_of_this_outsideworker<=30)
                {
                    display();
                    cout<<"\nPREFORMANCE EVALUATION STATUS=!!! GOOD!!!"<<endl;
                     cout<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATUS = !!! GOOD!!!";
                    outf<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                }
                else
                {   display();
                    cout<<"\nPREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                    cout<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                    outf<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                }
                }

            else
            {   display();
                cout<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                cout<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                    outf<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"total lost amount of working capital from this out sider RS: "<<lost_amount_from_working_capital<<endl;
            }
        }
        else if(umbrella_code=="gu1617")

            {
            reject_precentage_of_this_outsideworker=(rejected_umbrellas*100)/expected_umbrellas;

            cost_for_rawmaterials=(covers_amount*125)+(frames_amount*125)+(threads_amount*75);

            valueble_goods=expected_umbrellas-rejected_umbrellas;

            bonus_for_cluster_head_worker=valueble_goods*bonus_for_gu1617;

            payment_for_this_outside_worker=(valueble_goods)*125;

            total_cost_for_this_outside_order=cost_for_rawmaterials+payment_for_this_outside_worker;

            market_value_of_this_outside_order=valueble_goods*800; //market price of lu1313=RS 800

            profit_amount_from_this_outside_order= market_value_of_this_outside_order-total_cost_for_this_outside_order;

            lost_amount_from_working_capital=(total_cost_for_this_outside_order-market_value_of_this_outside_order);


            if(market_value_of_this_outside_order>total_cost_for_this_outside_order)
            {
                profit_precentage_from_this_outsourse_worker=(profit_amount_from_this_outside_order/total_cost_for_this_outside_order)*100;


                if(profit_precentage_from_this_outsourse_worker>=50.5 && reject_precentage_of_this_outsideworker<=30)
                {   display();
                    cout<<"\nPREFORMANCE EVALUATION STATUS=!!! GOOD PREFORMANCE!!!"<<endl;
                    cout<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATUS = !!! GOOD!!!";
                    outf<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                }
                else
                {
                    display();
                   cout<<"\nPREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                   cout<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"profit precentage is   ::"<<profit_precentage_from_this_outsourse_worker;
                    outf<<"%"<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"PREFORMANCE EVALUATION STATE = !!!POOR!!! INDICATING HIGH RISK FOR COMPANY FINANCIAL HEALTH"<<endl;
                    outf<<"\nBONUS AMOUNT FOR THIS CLUSTER_HEAD OUTSIDE WORKER RS :"<<bonus_for_cluster_head_worker<<endl;
                }
            }
            else
            {   display();
                cout<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                cout<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"WORKER NAME            ::"<<name<<endl;
                    outf<<"WORKER ID              ::"<<id<<endl;
                    outf<<"MONTH                  ::"<<month<<endl;
                    outf<<"reject precentage is   ::"<<reject_precentage_of_this_outsideworker;
                    outf<<"%"<<endl;
                    outf<<"             !!!!!! WARNING !!!!!!!!"<<endl;
                    outf<<"THERE ARE NO PROFITS BECASUE DAMAGE PRECENTAGE IS ABOVE 50%"<<endl;
                    outf<<"total lost amount of working capital from this out sider RS: "<<lost_amount_from_working_capital<<endl;
            }
        }


        else
        {
            cout<<"\n INVALID UMBRELLA CODE CHECK AGAIN!!!"<<endl;
        }

   outf.close();

    }

};















int main()
{
  login();

  select_raw_materials_details();
  read_assumptions();


   workers *a;
  cluster_head_worker obj;

  obj.input();


  obj.input_rawmaterials_and_outsourse_order_details();
  obj.setbonus(5,7,10);
  a=&obj;
  a->calculation_and_display();


}
