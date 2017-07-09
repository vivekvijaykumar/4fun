def str_divide(num1, num2):
    rlist=[]
    qlist=[]

    quotient = num1 / num2
    reminder = num1 % num2
    qlist.append(quotient)

    if(reminder == 0):
        return str(quotient)
    else:
        #loop for new quotients.
        while(True):
            if(reminder < num2):
                num1 = reminder * 10
                quotient = num1 / num2
                reminder = num1 % num2
                qlist.append(quotient)
                if(reminder == 0):
                    #we know its done at this point
                    break
                elif(reminder in rlist):
                    break
                else:
                    rlist.append(reminder)

        out_str=""
        if(reminder == 0):
            out_str = str(qlist[0]) + "." + str(qlist[1:])
        else:
            #reminder is valid and it repeated
            #find the position of repeatition and then move so
            #many places on the qlist and mark it repeated.
            pos = 0
            for x in rlist:
                if(reminder == x):
                    break
                pos += 1
            out_str = str(qlist[0]) + "." + str(qlist[1:pos]) + "(" + str(qlist[pos:]) + ")"

        return out_str
