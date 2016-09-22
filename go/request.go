/* 
 * Route Optimization API
 *
 * Our Route Optimization API solves the so called vehicle routing problem fast. It calculates an optimal tour for a set of vehicles, services and constraints
 *
 * OpenAPI spec version: 1.0
 * 
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package graphhopper

type Request struct {

	// An array of vehicles that can be employed
	Vehicles []Vehicle `json:"vehicles,omitempty"`

	// An array of vehicle types
	VehicleTypes []VehicleType `json:"vehicle_types,omitempty"`

	// An array of services
	Services []Service `json:"services,omitempty"`

	// An array of shipments
	Shipments []Shipment `json:"shipments,omitempty"`

	// An array of relations
	Relations []Relation `json:"relations,omitempty"`

	Algorithm Algorithm `json:"algorithm,omitempty"`

	// An array of objectives
	Objectives []Objective `json:"objectives,omitempty"`

	// An array of cost matrices
	CostMatrices []CostMatrix `json:"cost_matrices,omitempty"`
}