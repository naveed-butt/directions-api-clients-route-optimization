#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Route Optimization API
* Our Route Optimization API solves the so called vehicle routing problem fast. It calculates an optimal tour for a set of vehicles, services and constraints
*
* OpenAPI spec version: 1.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#import "SWGStop.h"


@protocol SWGShipment
@end

@interface SWGShipment : SWGObject

/* Unique identifier of service [optional]
 */
@property(nonatomic) NSString* _id;
/* name of shipment [optional]
 */
@property(nonatomic) NSString* name;
/* priority of service, i.e. 1 = high, 2 = normal, 3 = low. default is 2. [optional]
 */
@property(nonatomic) NSNumber* priority;

@property(nonatomic) SWGStop* pickup;

@property(nonatomic) SWGStop* delivery;
/* array of capacity dimensions [optional]
 */
@property(nonatomic) NSArray<NSNumber*>* size;
/* array of required skills [optional]
 */
@property(nonatomic) NSArray<NSString*>* requiredSkills;
/* array of allowed vehicle ids [optional]
 */
@property(nonatomic) NSArray<NSString*>* allowedVehicles;

@end