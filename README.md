# ATTPR
This plugin presents the app-tracking authorization request dialog and get the tracking authorization status.

This is a plugin for Unreal Engine 4.

## Marketplace url

https://www.unrealengine.com/marketplace/ja/product/e8a0a0ed3f4b45e4b43723cf8e243735

## Must be built with Xcode 12 and the iOS 14 SDK or later. 



## Supported Development Platforms

- Windows
- Mac

## Supported Target Build Platforms

- iOS

The behaviour on the platforms below is the tracking authorization status is always "Not Determind" and the App Tracking Transparency Dialog is not presented.

- Win64
- Mac
- Android

## Blueprint Example

・"GetTrackingAuthorizationStatus" is gets the current status of the app-tracking authorization.

See also: https://developer.apple.com/documentation/apptrackingtransparency/attrackingmanager/3547038-trackingauthorizationstatus

・"RequestTrackingAuthorization" is presents the app-tracking authorization request dialog only the first time.

See also: https://developer.apple.com/documentation/apptrackingtransparency/attrackingmanager/3547037-requesttrackingauthorization 

![1000](images/1000.png)



・You can customize the dialog message text.

![1010](images/1010.png)



## How to execute the example project

The example project is under the "AttPermissionRequest" folder  in this GitHub repository.

Put the "ATTPR" plugin into the plugins folder: "AttPermissionRequest/Plugins/ATTPR"

"Mobile Provision" and "Bundle Identifier" must be set for  builds for iOS.<br>
(Project Settings > Platforms > iOS) 

![1020](images/1020.png)

・Call "RequestTrackingAuthorizationResult"  then presents the app-tracking authorization request dialog on iOS.(Does not present the dialog on other platforms.)

![1030](images/1030.PNG)



## Return value of the AuthorizationStatus:

- After iOS14

  ```objective-c
  return ATTrackingManager.trackingAuthorizationStatus;
  ```

  Not Determind<br>
  Restricted<br>
  Denied<br>
  Authorized<br>

  See Also: https://developer.apple.com/documentation/apptrackingtransparency/attrackingmanager/authorizationstatus

- Before iOS13

  ```objective-c
  [[ASIdentifierManager sharedManager] isAdvertisingTrackingEnabled];
  ```

  If the return value is
  
  true: Authorized<br>false: Denied
  
  See Also: https://developer.apple.com/documentation/adsupport/asidentifiermanager/1614148-isadvertisingtrackingenabled