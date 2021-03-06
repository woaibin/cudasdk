/*
 * Copyright 1993-2013 NVIDIA Corporation.  All rights reserved.
 *
 * Please refer to the NVIDIA end user license agreement (EULA) associated
 * with this source code for terms and conditions that govern your use of
 * this software. Any use, reproduction, disclosure, or distribution of
 * this software and related documentation outside the terms of the EULA
 * is strictly prohibited.
 *
 */

#pragma once

namespace MCAsianOption
{
    class MCAsianOptionPlan;

    class MCAsianOptionPricer
    {
        public:
            MCAsianOptionPricer(MCAsianOptionPlan *plan);
            virtual ~MCAsianOptionPricer();

            void operator()(float *result);

        protected:
            MCAsianOptionPlan *m_plan;

            void execute(float *result);
    };
}
