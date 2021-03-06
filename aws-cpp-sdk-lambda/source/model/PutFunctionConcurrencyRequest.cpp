﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/lambda/model/PutFunctionConcurrencyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFunctionConcurrencyRequest::PutFunctionConcurrencyRequest() : 
    m_functionNameHasBeenSet(false),
    m_reservedConcurrentExecutions(0),
    m_reservedConcurrentExecutionsHasBeenSet(false)
{
}

Aws::String PutFunctionConcurrencyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reservedConcurrentExecutionsHasBeenSet)
  {
   payload.WithInteger("ReservedConcurrentExecutions", m_reservedConcurrentExecutions);

  }

  return payload.View().WriteReadable();
}




