using Uno;
using Uno.Collections;
using Uno.UX;
using Uno.IO;
using Outracks.Simulator;
using Outracks.Simulator.Bytecode;
using Outracks.Simulator.Runtime;
using Outracks.Simulator.Client;
namespace Outracks.Simulator 
{ 
	public class GeneratedApplication : Outracks.Simulator.Client.Application
	{
		public GeneratedApplication()
			: base(
				new [] 
				{new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("127.0.0.1"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("10.37.129.2"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("10.211.55.2"), 12124), new Uno.Net.IPEndPoint(Uno.Net.IPAddress.Parse("192.168.219.108"), 12124)},"/Users/kbs/Fuse/AR_example/AR_example.unoproj",new string[] 
				{ })
		{
			Runtime.Bundle.Initialize("AR_example");

			if defined(DotNet)
				Reflection = new DotNetReflectionWrapper(DotNetReflection.Load("/Users/kbs/Fuse/AR_example/build/Local/Designer"));
			if defined(CPLUSPLUS)
				Reflection = new NativeReflection(new SimpleTypeMap());
		}
	}
}