/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#import <Foundation/Foundation.h>

#import "TProtocol.h"

@protocol TBase <NSObject>

/**
 * De-serialize object from the given input protocol
 *
 * @param inProtocol protocol used for reading
 */
-(BOOL) read:(id <TProtocol>)inProtocol error:(NSError **)error;

/**
 * Serialize object to the given protocol
 *
 * @param outProtocol output protocol used for writing
 */
-(BOOL) write:(id <TProtocol>)outProtocol error:(NSError **)error;


/**
 * Validate required fields
 */
-(BOOL) validate:(NSError *__autoreleasing *)__thriftError;

@end
