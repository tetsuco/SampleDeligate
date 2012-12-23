//
//  PickerViewController.h
//  SampleUIPopover
//
//  Created by  on 11/11/01.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PickerViewControllerDelegate;

@interface PickerViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource> {
    
}

@property (nonatomic, assign) id <PickerViewControllerDelegate> delegate;

@end


@protocol PickerViewControllerDelegate

- (void)pickerViewControllerDelegateDidFinish:(NSInteger)getData;

@end