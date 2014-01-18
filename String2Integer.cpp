class Solution {
public:
    int atoi(const char *str) {
        			int index=0;
			long long ret=0;
			bool numBegin=false;
			bool isNegative=false;
			bool isOutflow=false;

			while(str[index]!='\0')
			{
				if(!numBegin)
				{
					if(str[index]!= ' ')
					{
						if(str[index] == '+')
						{
							numBegin=true;
						}
						else if(str[index]== '-')
						{
							numBegin=true;
							isNegative=true;
						}
						else if(str[index]>= '0' && str[index]<= '9')
						{
							numBegin=true;
							ret=str[index]-'0';
						}
						else
						{
							break;
						}

					}
				}
				else
				{
					if (str[index]>= '0' && str[index]<= '9')
						{
							ret=ret*10+(str[index]-'0');

							if(ret>INT_MAX)
							{
								isOutflow=true;
								break;
							}
					  }
					else
					{
						break;
					}

				}

				index++;

			}

			if(isOutflow)
			{
				if(isNegative)
				{
					return INT_MIN;
				}
				else
				{
					return INT_MAX;
				}
			}
			else
			{
				if(isNegative)
				{
					return ret*(-1);
				}
				else
				{
					return ret;
				}
			}

        
    }
};
