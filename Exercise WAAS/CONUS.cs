﻿using System;
using System.Collections.Generic;
using System.Text;

namespace Exercise_WAAS
{
    class CONUS : WAAS
    {

        public CONUS()
        : base("Continental United States", 6, .999, 0)
        {
            avalilability = availability_assess();
        }

        public override double availability_assess()
        {
            double ans = 0;
            for (int i = 4; i <= satalities; i++)
            {
                ans = ans + combination(satalities, i) * exponent(probability, i) * exponent(1 - probability, satalities - i);
            }
            return ans;
        }
    }
}
