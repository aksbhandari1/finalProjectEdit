#declare Flute = 
	union { 
		difference {

#declare FluteBody = 
	cylinder{
		<0,-4,0>
		<0,6.4,0>
		0.3
		pigment{ 
		rgb<1,0.75,0.14> }
		}

#declare Hole = 
	sphere{
		<0.4,1,0>
		0.4
		}

object{
	FluteBody}

object{        //firsthole
	Hole
		translate <0,4.6,0> 
	} 

object{
	Hole  
		scale <0,1,0>
	}  

object{
	Hole
		translate <0,2,0>
	}

object{
	Hole
		translate <0,-2,0>
	}

object{
	Hole
		translate <0,-4,0> 
	}
}    

torus{   //FluteRing
	0.1,0.25
	translate <0,4.7,0>
	}
}







